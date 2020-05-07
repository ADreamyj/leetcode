// 已知两个字符串strA和strB，求将strA转换成strB所需的最小编辑操作次数。许可的编辑操作包括将一个字符替换成另一个字符，插入一个字符，删除一个字符。
//
// 输入描述:
// 任意字符串strA和strB，其中第一行为strA，第二行为strB
//
// 输出描述:
// 最小编辑操作次数
//
// 示例1
// 输入
// FreshMeat
// FishAndMeat
//
// 输出
// 5

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int isprime(const string & s1, const string & s2){
	int size1 = s1.size(),size2 = s2.size();
	vector<vector<int>> vv(size1 + 1, vector<int>(size2 + 1,0));
	for(int i = 0; i <= size1; i++)
		vv[i][0] = i;
	for(int j = 0; j <= size2; j++)
		vv[0][j] = j;
	for(int i = 1; i <= size1; i++){
		for(int j = 1; j <= size2; j++){
			if(s1[i - 1] == s2[j - 1])
				vv[i][j] = vv[i - 1][j - 1];
			else
				vv[i][j] = min(vv[i - 1][j - 1],min(vv[i - 1][j],vv[i][j - 1])) + 1;
		}
	}
	return vv[size1][size2];
}
int main(){
	string s1,s2;
	while(cin >> s1 >> s2){
		int ret = isprime(s1,s2);
		cout << ret << endl;
	}
	return 0;
}
