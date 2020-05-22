// 视野争夺
// 小Q在进行一场竞技游戏,这场游戏的胜负关键就在于能否能争夺一条长度为L的河道,即可以看作是[0,L]的一条数轴。
// 这款竞技游戏当中有n个可以提供视野的道具−真视守卫,第i个真视守卫能够覆盖区间[xi,yi]。现在小Q想知道至少用几个真视守卫就可以覆盖整段河道。
// 输入描述:
// 输入包括n+1行。
//
// 第一行包括两个正整数n和L(1<=n<=105,1<=L<=109)
//
// 接下来的n行,每行两个正整数xi,yi(0<=xi<=yi<=109),表示第i个真视守卫覆盖的区间。 
//
//
//
// 输出描述:
// 一个整数，表示最少需要的真视守卫数量, 如果无解, 输出-1。
// 输入
// 4 6
// 3 6
// 2 4
// 0 2
// 4 7
// 输出
// 3

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool nums(vector<int> & a, vector<int>& b){
	return a[0] < b[0] || (a[0] == b[0] && a[1] < b[1]);
}
int main(){
	int n,L;
	while(cin >> n >> L){
		vector<vector<int>> vv(n,vector<int>(2,0));
		int a,b;
		for(int i = 0; i < n; i++){
			cin >> a >> b;
			vv.push_back({a,b});
		}
		sort(vv.begin(),vv.end(),nums);
		int pre = 0,i = 0,ans = 0,last = 0;
		while(i < vv.size()){
			while(i < vv.size() && vv[i][0] <= pre){
				last = max(last,vv[i][1]);
				++i;
			}
			++ans;
			pre = last;
			if(i < vv.size() && vv[i][0] > pre){
				ans = -1;
				break;
			}
			if(last >= L)
				break;
		}
		if(ans == 1 || last < L)
			cout << -1 << endl;
		else
			cout << ans << endl;
	}
	return 0;
}
