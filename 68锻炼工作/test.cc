// 锻炼/工作
//
// 动态规划/状态转移方程
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//0空闲1工作2锻炼
int main(){
	int n;
	while(cin >> n){
		vector<int> work(n),gym(n);
		for(int i = 0; i < n; ++i)
			cin >> work[i];
		for(int i = 0; i < n; ++i)
			cin >> gym[i];
		vector<vector<int>> dp(n + 1,vector<int>(3,0xffff));
		dp[0][0] = 0,dp[0][1] = 0,dp[0][2] = 0;
		for(int i = 1; i <= n; ++i){
			if(work[i - 1] == 1)
				dp[i][1] = min(dp[i - 1][0],dp[i - 1][2]);
			if(gym[i - 1] == 1)
				dp[i][2] = min(dp[i - 1][0],dp[i - 1][1]);
			dp[i][0] = min(dp[i - 1][0],min(dp[i - 1][1],dp[i - 1][2])) + 1;
		}
		int ret = min(dp[n][0],min(dp[n][1],dp[n][2]));
		cout << ret << endl;
	}
	return 0;
}
