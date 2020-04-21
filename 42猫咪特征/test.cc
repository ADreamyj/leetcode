// 小明是一名算法工程师，同时也是一名铲屎官。某天，他突发奇想，想从猫咪的视频里挖掘一些猫咪的运动信息。为了提取运动信息，他需要从视频的每一帧提取“猫咪特征”。一个猫咪特征是一个两维的vector<x, y>。如果x_1=x_2 and y_1=y_2，那么这俩是同一个特征。
// 因此，如果喵咪特征连续一致，可以认为喵咪在运动。也就是说，如果特征<a, b>在持续帧里出现，那么它将构成特征运动。比如，特征<a, b>在第2/3/4/7/8帧出现，那么该特征将形成两个特征运动2-3-4 和7-8。
//  现在，给定每一帧的特征，特征的数量可能不一样。小明期望能找到最长的特征运动。 

//第一行包含一个正整数N，代表测试用例的个数。
//
//每个测试用例的第一行包含一个正整数M，代表视频的帧数。
//
//接下来的M行，每行代表一帧。其中，第一个数字是该帧的特征个数，接下来的数字是在特征的取值；比如样例输入第三行里，2代表该帧有两个猫咪特征，<1，1>和<2，2>
//所有用例的输入特征总数和<100000
//
//N满足1≤N≤100000，M满足1≤M≤10000，一帧的特征个数满足 ≤ 10000。
//特征取值均为非负整数.


// 使用map<int, pair<int,int>> mp;//特征，特征起点帧的序号，特征计数。
// 遍历每个帧，加入新特征或者更新已存在特征的帧起点，特征计数。
// 1.如果该特征不存在，则添加该特征到map
// 2.如果该特征存在
// （1）如果该特征是连续的，通过判断（当前帧号 - 特征起点帧号 == 特征计数），计数 + 1;
// （2）如果该特征不是连续的，更新特征起点为当前帧号，计数 = 1;

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){
	int N;
	cin >> N;
	while(N--){
		int M;
		cin >> M;
		map<int,pair<int,int>> mp;//特征，起点数，计数（判断是否连续）
		int maxlen = 1;

		for(int i = 0; i < M; i++){//帧数
			int j;
			cin >> j;//本帧特征数

			for(int k = 0; k < j; k++){
				int x,y;
				cin >> x >> y;//特征由x * 10 + y表示
				if(mp.find(x * 10 + y) == mp.end()){//无该特征，添加该特征
					mp[x * 10 + y].first = i;//该特征，起点帧
					mp[x * 10 + y].second = 1;//该特征，计数
				}
				else{//原本有该特征，更新该特征
					pair<int,int> &p = mp[x * 10 + y];
					if(i - p.first == p.second){//该特征是连续的
						p.second += 1;//起始位置不变，计数 + 1
						maxlen = max(maxlen,p.second);//更新最长长度
					}else{
						p.first = i;//起始位置更新为当前位置
						p.second = 1;//计数更新为1
					}

				}
			}
		}
		cout << maxlen << endl;
	}
	return 0;
}




