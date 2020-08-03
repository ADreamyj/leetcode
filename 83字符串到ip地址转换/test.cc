// 将字符串转换为ip地址

// 判断ip地址是否合法

// 172.16.254.1  IPv4
// 2001:0db8:85a3:0:0:8A2E:0370:7334 IPv6
#include <iostream>
#include <string>
#include <string.h>

bool checkIpv4(std::string input){
	std::string str;
	for(int i = 0; i < input.size(); ++i){
		if(input[i] == '.'){
			int sum = std::stoi(str);
			if(str.size() >= 2 && str[0] == '0' || sum >= 255)
				return false;
			str = "";
		}else if(input[i] >= '0' && input[i] <= '9'){
			str += input[i];
		}
		else
			return false;
	}
	int sum = std::stoi(str);
	if(str.size() >= 2 && str[0] == '0' || sum >= 255)
		return false;
	return true;
}

bool checkIpv6(std::string input){
	std::string str;
	int sum = 0;
	for(int i = 0; i < input.size(); ++i){
		if(input[i] == ':'){
			if(str.empty() || str.size() > 4)
				return false;
			str = "";
			sum = 0;
		}else if(input[i] >= '0' && input[i] <= '9'){
			str += input[i];
			sum = sum * 16 + (input[i] - '0');
		}
		else if (input[i] >= 'A' && input[i] <= 'Z'){
			str += input[i];
			sum = sum * 16 + (input[i] - 'A') + 10;;
		}
		else if (input[i] >= 'a' && input[i] <= 'z'){
			str += input[i];
			sum = sum * 16 + (input[i] - 'a') + 10;;
		}else
			return false;
	}
	if(str.empty() || str.size() > 4)
		return false;
	return true;
}
int main(){
	std::string input;
	std::cin >> input;
	if(checkIpv4(input)){
		std::cout << "IPv4" << std::endl;
	}else if(checkIpv6(input)){
		std::cout << "IPv6" << std::endl;
	}else
		std::cout << "Neither" << std::endl;

	return 0;
}
