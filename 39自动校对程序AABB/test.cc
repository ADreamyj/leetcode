#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		vector<char> v;
		for(int i = 0; i < s.size(); i++){
			vector<char>::iterator iter;//迭代器用来记录
			if(v.size() < 2){
				v.push_back(s[i]);
				continue;
			}
			if(v.size() >= 2){//判断第一种情况
				iter = v.end() - 1;
				char p = *iter;//上一个
				p--;
				char pp = *iter;//上上一个
				if(s[i] == p && s[i] == pp){
					continue;
				}
			}
			if(v.size() >= 3){//判断第二三种情况
				iter = v.end() - 1;
				char p = *iter;//上一个
				iter--;
				char pp = *iter;//上上一个
				iter--;
				char ppp = *iter;//上上上一个
				if(s[i] == p && pp == ppp){
					continue;
				}
			}
			v.push_back(s[i]);
		}
		for(auto & e : v){
			cout << e;
		}
		cout << endl;
	}
	return 0;
}
