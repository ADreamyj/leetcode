// 小明目前在做一份毕业旅行的规划。打算从北京出发，分别去若干个城市，然后再回到北京，每个城市之间均乘坐高铁，且每个城市只去一次。由于经费有限，希望能够通过合理的路线安排尽可能的省一些路上的花销。给定一组城市和每对城市之间的火车票的价钱，找到每个城市只访问一次并返回起点的最小车费花销。

// 城市个数n（1 < n <= 20，包括北京）
// 城市间的车票价钱 n行n列的矩阵 m[n][n]

// 输出最小花销s

// 4
// 0 2 6 5
// 2 0 4 4
// 6 4 0 2
// 5 4 2 0

// 输出 13

// 说明：
// 共 4 个城市，城市 1 和城市 1 的车费为0，城市 1 和城市 2 之间的车费为 2，城市 1 和城市 3 之间的车费为 6，城市 1 和城市 4 之间的车费为 5，依次类推。假设任意两个城市之间均有单程票可购买，且票价在1000元以内，无需考虑极端情况。
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int isprime(vector<vector<int>> & vv){
	const int MAX = 0x0fffffff;
	int n = vv.size();
	int num = 1 << n;
	//dp[i][j] 中的i是一个二进制形式的数，表示经过城市的集合。
	//表示经过了i中的城市，并且以j结尾的路径长度。
	vector<vector<int>> dp(num,vector<int>(n,MAX));
	dp[1][0] = 0;//从城市0出发，所有经过城市0，以城市0结尾的路径为0
	//从城市0出发，更新和其他的距离
	for(int i = 1; i < num; i++){
		for(int j = 0; j < n; j++){
			if(dp[i][j] != MAX){//如果已经访问过
				for(int k = 0; k < n; k++){
					if((i & (1 << k)) == 0){
					//没有访问过k，且从这里到k的距离小于原来的距离，则更新
						dp[i | (1 << k)][k] = min(dp[i | (1 << k)][k], dp[i][j] + vv[j][k]);
					}
				}
			}
		}
	}
	int res = MAX;
	for(int i = 1; i < n; i++){
		res = min(res,dp[num - 1][i] + vv[i][0]);
	}
	return res;
}

int main(){
	int n;
	while(cin >> n){
		vector<vector<int>> vv(n,vector<int>(n,0));
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> vv[i][j];
			}
		}
		cout << isprime(vv) << endl;
	}
	return 0;
}
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> vv(n,vector<int>(n,0));
    for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
			            cin >> vv[i][j];
			        }
	    }
	int num = 1 << (n - 1);//对1进行左移n - 1位，值刚好等于2^(n-1)
	    //dp表，n行，num列
	vector<vector<int>> dp(n,vector<int>(num,0));
	int MAX = 0x0fffffff;
	//初始化dp表的第一列
	for(int i = 0; i < n; i++)
		dp[i][0] = vv[i][0];
	    //设想一个数组城市子集num[j]，长度为num，且num[j] = j，对于num[j]即为压缩状态的城市集合。
		//从1到v - 1用二进制表示的话，刚好可以映射成除了0号城市外的剩余n - 1个城市在不在子集v[j]中，1表示在，0表示不在。
		//若有总共有4个城市的话，除了第0号城市，对于1 - 3号城市
		//111 = v - 1 = 2^3-1 = 7，从高位到低位表示3到1号城市都在子集中
		//101 = 5，表示3，1号城市在子集中，而其他城市不在子集中
		//这里j不仅是dp表的列坐标值，如上所述，j的二进制表示城市相应城市是否在子集中
		    for(int j = 1; j < num; j++){
			        for(int i = 0; i < n; i++){//这个i不仅代表城市号，还代表第i次迭代
					            dp[i][j] = MAX;//为了方便求最小值，先将其设为最大值
					            if(((j >> (i - 1)) & 1) == 0){
									//因为j就代表城市子集num[j]，(j >> (i - 1))是把第i号城市取出来。
									//并位与上1，等于0，说明是从i号城市出发，经过城市子集num[j]，回到起点0号城市
									for(int k = 1; k < n; k++){//这里要求经过子集num[j]里的城市回到0号城市的最小距离
										if(((j >> (k - 1)) & 1) == 1){//遍历城市子集num[j]
											//dp[k][j^(1 << (k - 1))]，是将dp定位到，从k城市出发，经过城市子集num[s]，回到0号城市所花费的最小距离。
											//怎么定位到城市子集num[s]呢，因为如果从k城市出发的，经过城市子集num[s]的话
											//那么num[s]中肯定不包含kl，那么在j中把第k个城市置0就可以了，而j^(1 << (k - 1))的功能就是这个
											dp[i][j] = min(dp[i][j],vv[i][k] + dp[k][j^(1 << (k - 1))]);                                                                                                                                                 
								}
					}
			}
		}
	}
		    cout << dp[0][num - 1] << endl;
			    return 0;
}
