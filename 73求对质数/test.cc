// 给出一个整数，求出有多少对质数相加的和等于这个整数


#include <iostream>
#include <cmath>
bool isprime(int num){
	for(int i = 2; i <= sqrt(num); ++i){
		if(num%i == 0)
			return false;
	}
	return true;
}

int isnum(int n){
	int sum = 0;
	for(int i = 1;i <= n / 2; ++i){
		if(isprime(i) && isprime(n - i))
			sum++;
	}
	return sum;
}

int main(){
	int n;
	while(std::cin >> n){
		int sum = isnum(n);
		std::cout << sum << std::endl;
	}
	return 0;
}
