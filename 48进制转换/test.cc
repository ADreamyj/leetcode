// 将一个16进制的数转换为10进制
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	string s;
	int ret = 0;
	int flag = 0;
	while(cin >> s){
		for(int i = s.size() - 1; i > 0; i--){
			if(s[i] >= '0' && s[i] <= '9')
				ret += (s[i] - '0') * pow(16,flag++);
			if(s[i] >= 'A' && s[i] <= 'F')
				ret += (s[i] - '0' + 10) * pow(16,flag++);
		}
		cout << ret << endl;
	}
	return 0;
}
