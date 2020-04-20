// 总共有36张牌，每张牌是1 - 9，每张数字4张牌
// 你手中有其中的14张牌，如果这14张牌满足如下条件，及算作和牌

// 14张牌中有2张相同数字的牌，称为雀头。
// 除去上述两张牌，剩下的12张牌可以组成4个顺子或者刻字(111,234)

// 从36张牌中抽取了13张牌，在剩下的23张牌中，再取一张牌，取到哪几种数字牌可以和牌

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool ishu(vector<int> num){
	if(num.empty())
		return true;
	int count0 = 0;
	for(int i = 0; i < num.size(); i++){
		if(num[0] == num[i])
			++count0;
		else
			break;
	}
	//第一个元素出现的次数为count
	if(num.size() % 3 != 0 && count0 >= 2){
		//尝试将第一个元素作为雀头
		vector<int> newnum(num.begin() + 2, num.end());
		if(ishu(newnum))
			return true;
	}
	//若第一个元素不能做雀头，且大于三次
	if(count0 >= 3){
		vector<int> newnum(num.begin() + 3, num.end());
		if(ishu(newnum)){//将重复的第一个元素去掉，遍历到第二个元素
			return true;
		}
	}
	//如果元素的后两个元素都存在，那么把后两个元素都删掉一个
	if(count(num.begin(),num.end(),num[0] + 1) > 0 && count(num.begin(),num.end(), num[0] + 2) > 0){
		vector<int> newnum(num.begin() + 1, num.end());
		newnum.erase(find(newnum.begin(),newnum.end(),num[0] + 1));
		newnum.erase(find(newnum.begin(),newnum.end(),num[0] + 2));
		if(ishu(newnum))
			return true;
	}
	return false;
}

bool huipai(vector<int> num, int n){
	if(count(num.begin(),num.end(),n) == 4)//如果n已经出现了4次，那么不能再加n
		return false;
	num.push_back(n);
	sort(num.begin(),num.end());
	return ishu(num);//判断是否胡牌
}

int main(){
	vector<int> num;
	vector<int> res;
	for(int i = 0; i < 13; i++){
		int temp;
		cin >> temp;
		num.push_back(temp);
	}
	for(int n = 1; n < 10; n++){
		if(huipai(num,n))//挨个试是否胡牌，总共也就10种选择
			res.push_back(n);
	}
	if(res.empty())
		cout << 0 ;
	else
		for(int i = 0; i < res.size(); i++)
			cout << res[i] << " ";
	cout << endl;
	return 0;
}
