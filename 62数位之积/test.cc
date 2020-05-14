// 现给定任意正整数n，请寻找并输出最小的正整数m，使得m的各位
// （个位，十位，百位）之乘积等于n，如不存在则输出-1.
//
// 输入：36
// 输出：49

#include <iostream>
#include <algorithm>
using namespace std;

int solution(int n){
	if(n < 10)
		return n + 10;
	int ret = 0,base = 1;
	for(int i = 9; i > 1; i--){
		while(n%i == 0){
			ret += base * i;
			base *= 10;
			n /= i;
		}
	}
	if(n > 1)
		return -1;
	else
		return ret;
}
	
int main(){
	int n;
	while(cin >> n){
		cout << solution(n) << endl;
	}
	return 0;
}
