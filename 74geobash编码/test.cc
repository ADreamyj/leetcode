// geohash 编码： geohash 常用于将二维的经纬度转换为字符串，分为两步：第一步是经纬度的二进制编码，第二部是 base32 转码。
//
// 此题考察唯独的二进制编码：算法对维度 [-90,90] 通过二分法进行无限逼近（取决于所需精度，本题精度为 6 ）。注意，本题进行二分法逼近过程中只采用向下取整来进行二分，针对二分中间值属于右区间。算法举例如下：
//
// （1） 区间 [-90,90] 进行二分为 [-90,0),[0,90] ，成为左右区间，可以确定 80 为右区间，标记为 1 ；
//
// （2） 针对上一步的右区间 [0,90] 进行二分为 [0,45),[45,90] ，可以确定 80 是右区间，标记为 1 ；
//
// （3） 针对 [45,90] 进行二分为 [45,67),[67,90] ，可以确定 80 为右区间，标记为 1 ；
//
// （4） 针对 [67,90] 进行二分为 [67,78),[78,90] ，可以确定 80 位右区间，标记为 1 ；
//
// （5） 针对 [78,90] 进行二分为 [89,84),[84,90] ，可以确定 80 位左区间，标记为 0 ；
//
// （6） 针对 [78,84) 进行二分为 [78,81),[81,84) ，可以确定 80 位左区间，标记为 0 ；
//
// 已达精度要求，编码为 111100
//
// 样本输入： 80
//
// 样本输出： 111100]]]]]]]]

# include <iostream>
# include <vector>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
void Getgeohash(int num,int &  presision,int left,int right,std::vector<int> & result){
	if(num < left || num > right || presision == 0)
		return;

	int mid = (left + right) >> 1;
	if(num >= mid){
		result.push_back(1);
		--presision;
		left = mid;
	}else if(num < mid){
		result.push_back(0);
		--presision;
		right = mid;
	}
	Getgeohash(num,presision,left,right,result);
}

void geohash(int num, int presision = 6,int left = -90, int right = 90){
	if(num < left || num > right)
		return;
	std::vector<int> result;
	Getgeohash(num,presision,left,right,result);

	for(int i = 0; i < result.size(); ++i)
		std::cout << result[i];
	std::cout << std::endl;
}

int main(){
	int num;
	while(std::cin >> num){
		int presision = 6;
		int left = -90;
		int right = 90;
		
		std::vector<int> result;
		Getgeohash(num,presision,left,right,result);
	
		for(int i = 0; i < result.size(); ++i)
			std::cout << result[i];
	}
	return 0;
}
