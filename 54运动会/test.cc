// 一年一度的快手运动会又要开始了，同学们终于有一天可以离开鼠标键盘显示器，全身心的投入到各种体育项目中。UED设计师小红虽然没有参加体育项目，但她的责任重大，因为她是拉拉队的队长，她需要在每个项目中为参赛的同学们加油助威。
//
// 因为运动会的项目众多，很多项目在同一时间会同时进行着。作为拉拉队长，小红需要遵守以下规则：
//
// 不能同时给多个体育项目加油助威
//
// 给每个体育项目加油的时长必须超过项目时长的一半，每个体育项目只能加油一次
//
// 体育项目的开始和结束时间都是整点，如果项目进行到一半想要离开，也只能选择整点离开
//
// 不考虑往返于各个体育项目比赛场地中花费的时间
//
// 请帮小红设计一个算法，在已知所有体育项目日程的前提下，计算是否能在每个体育项目中为参赛的同学们加油。
//
//
// 说明：
//
// 如果体育项目时长为2，超过时长的一半为2;
//
// 如果体育项目时长为3，超过时长的一半为2;
//
// 如果体育项目时长为4，超过时长的一半为3；
//
// 输入描述:
// 输入包括1+N行 第一行输入一个整数N, 1 <= N <= 10，表示今天要参加多少个讨论会 后续N行，每行输入开始和结束时间，均为整数，用空格分隔，0 <= startTime < endTime <= 24
//
// 输出描述:
// 输出包括一行 如果小红能够参加全部讨论会，返回1 如果小红不能够参加全部讨论会，返回-1
//
// 示例1
// 输入
// 3
// 3 10
// 1 5
// 4 6
//
// 输出
// 1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int,int> & v1, pair<int,int> & v2){
	if(v1.second < v2.second)
		return true;
	else
		return false;
}

int Solution(vector<pair<int,int>> & v){
	sort(v.begin(), v.end(), cmp);
	int pre = v[0].first;
	for(int i = 0; i < v.size(); ++i){
		int cur = max(pre,v[i].first);
		int time = (v[i].second - v[i].first) / 2 + 1;
		if(cur + time > v[i].second)
			return -1;
		pre = cur + time;
	}
	return 1;
}

int main(){
	int n;
	while(cin >> n){
		vector<pair<int,int>> v(n);
		for(int i = 0; i < v.size(); i++)
			cin >> v[i].first >> v[i].second;
		cout << Solution(v) << endl;
	}
	return 0;
}
