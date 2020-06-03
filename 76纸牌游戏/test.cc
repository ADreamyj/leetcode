// 牛牛和羊羊正在玩一个纸牌游戏。这个游戏一共有n张纸牌, 第i张纸牌上写着数字ai。
// 牛牛和羊羊轮流抽牌, 牛牛先抽, 每次抽牌他们可以从纸牌堆中任意选择一张抽出, 直到纸牌被抽完。
// 他们的得分等于他们抽到的纸牌数字总和。
// 现在假设牛牛和羊羊都采用最优策略, 请你计算出游戏结束后牛牛得分减去羊羊得分等于多少

#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	int n;
	while(std::cin >> n){
		std::vector<int> v(n);
		for(int i = 0; i < n; ++i)
			std::cin >> v[i];
		sort(v.begin(),v.end());
		int sum = 0;
		if(v.size() % 2 == 1)
			sum = v[0];
		for(int i = v.size() - 1; i > 0; i-=2){
			int ret = v[i] - v[i - 1];
			sum += ret;
		}
		std::cout << sum << std::endl;
	}
	return 0;
}
