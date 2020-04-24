// Z国的货币系统包含面值1元、4元、16元、64元共计4种硬币，以及面值1024元的纸币。现在小Y使用1024元的纸币购买了一件价值为N (0 < N \le 1024)N(0<N≤1024)的商品，请问最少他会收到多少硬币？

// 输入描述：一行，包含一个数N
// 输出描述：一行，包含一个数，表示最少收到的硬币数

// 输入 200
// 输出 17
// 说明 花200，需要找零824块，找12个64元硬币。3个16元硬币，2个4元硬币即可

#include <iostream>
#include <vector>
using namespace std;

int isprime(vector<int>& v, int n){
	vector<int> dp(n + 1, n + 1);
	dp[0] = 0;
	dp[1] = 1;
	for(int i = 1; i <= n; i++){
		for(auto e : v){
			if(i - e < 0)
				continue;
			dp[i] = min(dp[i], 1 + dp[i - e]);
		}
	}
	return dp[n];
}

int main(){
	int n;
	cin >> n;
	vector<int> v = {64,16,4,1};
	int ret = isprime(v,1024 - n);
	cout << ret << endl;
	return 0;
}
