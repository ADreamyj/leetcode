// 子串一定是连续的，列入"010"有6个子串，分别是
// "0","1","0","01","10","010"

// 输入描述：
// 第一行是一个整数k，表示子串中有k个1可能是病毒
// 第二行是一个字符串，二进制的代码表示，只包含"0"或"1"

// 1
// 1010
//
// 输出6
// 1，1，10，01，10，010


// 思路：使用两个辅助vector，一个记录1的位置v，一个记录某个1的前面0的数量zeros，
// 用一个长度为k的窗口在v上滑动，满足条件的子串的数量与窗口首尾位置对应的zeros
// 记录的0的数量相关。将每一个窗口的结果相加即可，结果设置为long long型。

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	int k,zero;
	long long ret = 0;
	string s;
	char ch;
	cin >> k >> s;
	vector<int> v,zeros;
	for(int i = 0; i < s.size(); i++){
		ch = s[i];
		if(ch == '1'){
			v.push_back(i);
			zeros.push_back(zero);
			zero = 0;
		}else if(ch == '0')
			zero += 1;
	}
	if(ch == '0')
		zeros.push_back(zero);
	else
		zeros.push_back(0);
	if(k == 0){//如果k == 0，只统计0的个数就ok了。
		long long num;
		for(int i = 0; i < zeros.size(); i++){
			num = zeros[i];
			ret += num * (num + 1) / 2;
		}
	}else if(v.size() < k)
		ret = 0;
	else{
		int i = 0, j = k - 1;
		//满足条件1的个数能构成的子串数量由其左右两边的0的数量决定
		//比如左边3个0，右边4个0，那么自由组合一下就是(3 + 1) * (4 + 1) = 20个
		while(j < v.size()){
			ret += (zeros[i] + 1) * (zeros[j + 1] + 1);
			i++;
			j++;
		}
	}
	cout << ret << endl;
	return 0;
}
