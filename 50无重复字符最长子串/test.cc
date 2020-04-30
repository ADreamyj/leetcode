// 给定一个字符串，请你找出其中不含有字符的最长子串的长度。

// 输入描述：输入字符串（长度 <= 100000）
// 输出描述：不含有重复字符的最长子串长度
//
// 输入：abcabcaa
// 输出：3

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
//方法1： 滑动窗口，我们使用哈希表将字符存储在当前窗口[i,j)中，我们呢向右侧滑动索引j，如果它不在哈希表中，继续滑动j，直到s[j]已经存在于哈希表中。此时，我们可以得到没有重复字符的最长子字符串将会以索引i开头。
//时间复杂度O(2n)，最糟糕的情况将被i和j访问两次。


int main(){
	string s;
	while(cin >> s){
		map<char,int> hash;
		int i = 0,j = 0,ret = 0;
		vector<int> v;
		while(i < s.size() && j < s.size()){
			if(hash.find(s[j]) == hash.end()){
				hash[s[j++]] = j;
				ret = max(j - i,ret);
				/*if(ret < (j - i)){
					int k = i;
					v.clear();
					while(k <= j){
						v.push_back(s[k]);
					}
					ret = j - i;
				}*/
			}else{
				hash.erase(s[i++]);
			}
		}
		cout << ret << endl;
		for(int i = 0; i < v.size(); i++)
			cout << v[i];
		cout << endl;
	}
	return 0;
}



// 当我们找到重复的字符时，我们立刻跳过该窗口，也就是说，如果s[j]在[i,j)范围内有与
// j重复的字符，我们不需要逐渐增加i，可以直接跳过i - j范围内的所有元素。并将i变为j + 1
// 时间复杂度为 O(n)
// 空间复杂度为 O(min(m,n))
/*
int main(){
	string s;
	while(cin >> s){
		map<char,int> hash;
		int i = 0,j = 0,ret = 0;
		vector<int> v;
		for(i,j;i < s.size() && j < s.size(); j++){
			if(hash.find(s[j]) != hash.end()){
				i = max(i, hash.find(s[j])->second + 1);
			}
			//ret = max(ret,j - i + 1);
			if(ret < (j - i + 1)){
				int k = i;
				v.clear();
				while(k <= j){
					v.push_back(s[k]);
					k++;
				}
				ret = j - i + 1;
			}
			hash[s[j]] = j;
		}
		cout << ret << endl;
		for(int i = 0; i < v.size(); i++)
			cout << s[i];
		cout << endl;
	}
	return 0;
}
*/
