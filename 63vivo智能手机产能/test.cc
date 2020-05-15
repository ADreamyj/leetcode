// 在vivo产线上，每位职工随着对手机加工流程和经验的增加，日产量也会不断攀升。
// 假设第一天产量1台，接下来两天每天量产2台，接下来3天每天量产3台

// 输入：11
// 输出：35



#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		int ans = 0;
		//11
		//35
        //ans = 1 * 1 = 1 n = 10
	    //ans = 1 + 2 * 2 = 5, n = 8
	    //ans = 5 + 3 * 3 = 14, n = 5
		//ans = 14 + 4 * 4 = 30, n = 1
		//ans = 30 + 5 * 1 = 35
		for(int i = 0; n > 0; ++i){
			ans += i * min(i,n);
			n -= i;
		}
		cout << ans << endl;
	}
	return 0;
}
