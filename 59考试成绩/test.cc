// 班级一共有n个学生，考试有m个问题，每个题目有5个答案，并且只有一个正确答案
// 每个题目的分数不一样，第i个题目的分数用a[i]表示，如果不对得0分
//
// 考试结束后，每个学生都记得自己得答案，但是他们还不知道正确答案是什么
//
// 输入：
// 第一行包含2个整数，n和m（n是学生数量，m是题目数量）
// 下面n行数据每行包含一个string，表示第i个学生得答案，s的第j个字符表示第j题的答案
//
// 输出描述
// 一个正整数，全班学生最大的可能获得的分数总和
//
// 输入：
// 2 4
// ABCD
// ABCE
// 1 2 3 4
//
// 输出：
// 16

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int n,m;
	while(cin >> n >> m){
		vector<string> v(n);
		vector<int> socre(m);
		for(int i = 0; i < n; i++)
			cin >> v[i];
		for(int j = 0; j < m; j++)
			cin >> socre[j];
		long long  ret = 0;
		for(int i = 0; i < m; i++){  //题目循环5次
			vector<int> temp(5);   //ABCDE五个答案
			for(int j = 0; j < n; j++){  // 人数
				//temp每个答案出现的次数
				temp[v[j][i] - 'A']++;
			}
			sort(temp.begin(),temp.end());
			int most = temp.back();
			ret += most * socre[i];  // 最多的次数 * 得分
		}
		cout << ret << endl;
	}
	return 0;
}
