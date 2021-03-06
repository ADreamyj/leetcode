// 假定一种编码的编码范围是a-y的25个字母，从1位到4位的编码，如果我们把该编码按字典序排序，形成一个数组如下：
// a,aa,aaa,aaaa,aaab,aaac,.....,....,b,ba,baa,baaa,baab,baac,... ...,yyyw,yyyx,yyyy
// 其中a的Index为0，aa的Index为1，aaa的Index为2，以此类推。
// 编写一个函数，输入是任意一个编码，输出这个编码对应的index，如：
// 输入：baca
// 输出：16328
//

#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	string s;
	while(cin >> s){
		int size = s.size();
		int index = 0;
		for(int i = 0; i < size; ++i){
			int n = s[i] - 'a';
			for(int j = 0; j < 4 - i; j++)
				index += n * pow(25,j);
		}
		cout << index << endl;
	}
	return 0;
}
