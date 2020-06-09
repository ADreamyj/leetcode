// 将大写字母全放在后面


#include <iostream>
#include <string>
#include <algorithm>

bool isbig(char a){
	if(a <= 'Z' && a >= 'A')
		return true;
	return false;
}

void Swap(char & a, char& b){
	if(a != b){
		a = a^b;
		b = a^b;
		a = a^b;
	}
}

int main(){
	std::string s;
	while(std::cin >> s){
		int len = s.size();
		int end = len;
		// 交换的时候，每次交换到len的时候都需要-1，这样最后一个数不会在for循环内部遍历
		// 但是当一个字符为大写时，交换需要一直到结尾，因为让第一个位于前面的大写字符
		// 在后面大写字符里面也是第一个
		for(int i = 0; i < len; ++i){
			if(isbig(s[i])){
				int j = i;
				for(; j < end - 1; ++j)
					Swap(s[j],s[j + 1]);
				--len;
				--i;
			}
		}
		std::cout << s << std::endl;
	}
	return 0;
}
