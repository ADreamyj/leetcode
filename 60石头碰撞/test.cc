// 给定一组石头，每个石头有一个正数的重量，每一轮开始的时候，选择两个石头一起碰撞，
// 假定两个石头的重量为x，y，x<=y，碰撞结果为
// 1.如果x == y，碰撞结果为两个石头消失
// 2.如果x != y，碰撞结果两个石头消失，生成一个新的额石头，新石头重量为 y-x
//
// 最终最多剩下一个石头为结束。求解最小的剩余石头质量的可能性是多少？
//
// 输入描述：
// 第一行输入石头个数
// 第二行输入石头质量
//
// 6
// 2 7 4 1 8 1
//
// 1

#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		vector<int> v(n);
		int sum = 0;
		for(int i = 0; i < n; i++){	
			cin >> v[i];
			sum += v[i];
		}
		int num = sum / 2;
		vector<vector<int>> dp(n + 1, vector<int>(num + 1,0));
		for(int i = 0; i < num; ++i)
			dp[0][i] = v[0] > i ? 0 : v[0];
		for(int i = 1; i < n; ++i){
			for(int j = 0; j <= num; ++j){
				if(j >= v[i])
					dp[i][j] = max(dp[i - 1][j],v[i] + dp[i - 1][j - v[i]]);
				else
					dp[i][j] = dp[i - 1][j];
			}
		}
		cout << sum - dp[n - 1][num] * 2 << endl;
	}
	return 0;
}
