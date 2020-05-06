// 输入一个英文句子, 词之间有1个或者若干个空格，句子以英文标点"."结尾。
// 要求颠倒该句子中的词语顺序，并且词之间有且只有一个空格，结尾仍然是"."，结尾的"."与前一个单词之间无空格。
//
// 输入描述:
// I     love   you  .
//
//
// 输出描述:
// you love I.

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
	string s;
	stack<string> st;
	while(cin >> s){
		st.push(s);
	}
	while(!st.empty()){
		string p = st.top();
		st.pop();
		if(p == ".")
			continue;
		if(p[p.size() - 1] == '.'){
			for(int j = 0; j < p.size() - 1; j++)
				cout << p[j];
		}else if(st.empty())
			cout << p;
		else
			cout << p << " ";
	}
	cout << "." << endl;
	return 0;
}
