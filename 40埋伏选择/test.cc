// 我们在字节跳动大街的N个建筑中选定3个埋伏地点。
// 为了相互照应，我们决定相距最远的两名特工间的距离不超过D。

#include <iostream>
#include <vector>
using namespace std;

long long SUM(long long count){
	return count * (count - 1)/2;
}
int main(){
	int N,D;
	cin >> N >> D;
	vector<int> v(N);
	long long count = 0;
	for(int begin = 0,end = 0; end < N; end++){
		cin >> v[end];
		while(end >= 2 && (v[end] - v[begin] > D))
			++begin;
		count += SUM(end - begin);
	}
	cout << count % 99997867 << endl;
	return 0;
}
