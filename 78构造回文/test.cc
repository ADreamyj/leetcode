// 给定一个字符串s，你可以从中删除一些字符，使得剩下的串是一个回文串，如何删除
// 才能使得回文串最长呢?
// 输出需要删除得字符个数

#include <iostream>
#include <string>
#include <algorithm>
int dp[1024][1024];

int max_len(std::string s1, std::string s2){
	int size1 = s1.size();
	int size2 = s2.size();
	for(int i = 0; i < size1; ++i)
		dp[i][0] = 0;
	for(int j = 0; j < size2; ++j)
		dp[0][j] = 0;
	for(int i = 1; i <= size1; ++i){
		for(int j = 1; j <= size2; ++j){
			if(s1[i - 1] == s2[j - 1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = std::max(dp[i - 1][j],dp[i][j - 1]);
		}
	}
	return dp[size1][size2];
}


int main(){
	std::string s1;
	while(std::cin >> s1){
		int size = s1.size();
		if(size == 1){
			std::cout << 1 << std::endl;
			break;
		}
		std::string s2 = s1;
		reverse(s2.begin(),s2.end());
		int max_length = max_len(s1,s2);
		std::cout << size - max_length << std::endl;
	}
	return 0;
}
