// p为给定的二维平面整数点集，定义p中某点x，如果x满足p中任意点都不在x的右上方区域里（横纵坐标
// 都大于x），则称其为“最大的”。求出所有“最大的”点的集合（所有点的横坐标和纵坐标都不重复，
// 坐标轴范围在[0,1e9]内）
//
// 如下图：实心点为满足条件的点的集合，请实现代码找到集合p中的所有“最大”点的集合并输出

#include <iostream>
#include <algorithm>
struct point{
	int a,b;
};

bool cmp(point x,point y){
	return x.a > y.a;
}

int main(){
	int n;
	while(std::cin >> n){
		point p[n];
		int x,y;
		for(int i = 0; i < n; ++i){
			std::cin >> x >> y;
			p[i].a = x;
			p[i].b = y;
		}
		std::sort(p,p + n,cmp);
		int len = 1;
		int cur = p[0].b;
		for(int i = 1; i < n; ++i){
			if(cur < p[i].b){
				cur = p[i].b;
				p[len].a = p[i].a;
				p[len].b = p[i].b;
				++len;
			}
		}
		for(int i = len - 1; i >= 0; --i){
			std::cout << p[i].a << " " << p[i].b << std::endl;
		}
	}
	return 0;
}
