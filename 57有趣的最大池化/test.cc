// 假设数组为[16,19,15,13,16,20]，且核大小为3，则当窗口依次滑过数组时，取出如下四个子数组
// [16,19,15]，[19,15,13]，[15,13,16]，[13,16,20]这4个子数组中的最大值分别是19，19，16，20
// 故该数组经过大小为3的核的max-pooling的结果为 19 19 16 20

// 输入由三行构成
// 第一行是一个整数n，数组的元素个数
// 第二行是n个整数，给出数组的元素
// 第三行是一个整数ks，给出max-pooling核的大小

#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main(){
	int n,ks;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	cin >> ks;
	deque<int> dq;//用一个队列存储，方便
	for(int i = 0; i < n; i++){
		while(!dq.empty() && dq.back() < v[i])//如果队列不为空并且尾部元素小于新元素，要删除
			dq.pop_back();
		dq.emplace_back(v[i]);//插入元素
		if(i < ks - 1)//前面元素不用判断直接插入
			continue;
		if(dq.front() == v[i - ks])//如果超出窗口范围，需要删除队列中的元素
			dq.pop_front();
		cout << dq.front() << ' ';//输出第一个元素。
	}
	cout << endl;
	return 0;
}
