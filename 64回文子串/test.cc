// 给定一个字符串，你的任务是计算这个字符串中有多少回文子串。
// 具有不同开始位置或结束位置的回文串，即使是由相同的字符组成，也会被计为是不同的子串
//
// 输入：输入一个字符串
// 输出：输出一个非负整数，代表输入字符串有多少个回文子串
//
// 输入：abc
// 输出：3

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string s;
	while(cin >> s){
		int count = 1;
		for(int i = 1; i < s.size(); ++i){
			string ret;
			ret += s[i];
			for(int j = 1; j <= i; ++j){
				ret += s[i - j];
				string temp = ret;
				reverse(temp.begin(),temp.end());
				if(ret == temp)
					count++;
			}
			count++;
		}
		cout << count << endl;
	}
	return 0;
}
