// 小Q的父母要出差N天，走之前给小Q留下了M块巧克力，小Q决定每天吃的巧克力数量不少于前一天
// 吃的一半，但是他又不想在父母回来之前的某一天没有巧克力吃，请问他第一天最多能吃多少块巧克力

#include <iostream>
int n,m;

int sum(int mid){
	int num = 0;
	for(int i = 0; i < n; ++i){
		num += mid;
		mid = (mid + 1) >> 1;
	}
	return num;
}

int fun(){
	if(n == 1)
		return m;
	int start = 1;
	int end = m;
	while(start < end){
		int mid = (start + (end - start)) >> 1;
		if(sum(mid) == m)
			return mid;
		else if(sum(mid) < m)
			start = mid;
		else
			end = mid - 1;
	}
	return end;
}

int main(){
	while(std::cin >> n >> m){
		int res = fun();
		std::cout << res << std::endl;
	}
	return 0;
}
