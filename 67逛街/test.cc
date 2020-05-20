// 小Q在周末的时候和他的小伙伴来到大城市逛街，一条步行街有很多高楼。
// 共有n座高楼排成一行。小Q从第一栋一直走到了最后一栋，
// 小Q从来都没有见到这么多的楼，所以他想知道他在每栋楼的位置处
// 能看到多少栋楼呢？（当前面的楼的高度大于等于后面的楼时，后面的楼将被挡住） 
//
// 输出描述:
// 输出一行，包含空格分割的n个数字vi，分别代表小Q在第i栋楼时能看到的楼的数量。
// 示例1
// 输入
// 6
// 5 3 8 3 2 5
// 输出
// 3 3 5 4 4 4
// 说明
// 当小Q处于位置3时，他可以向前看到位置2,1处的楼，向后看到位置4,6处的楼，加上第3栋楼，共可看到5栋楼。当小Q处于位置4时，他可以向前看到位置3处的楼，向后看到位置5,6处的楼，加上第4栋楼，共可看到4栋。

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector<int> a,b;
stack<int> s1,s2;

int main(){
	int n;
	while(cin >> n){
		vector<int> v(n);
		for(int i = 0; i < n; ++i)
			cin >> v[i];
		for(int i = 0,j = n - 1; i < n,j >= 0; ++i,--j){
			a.push_back(s1.size());
			b.push_back(s2.size());
			while(!s1.empty() && s1.top() <= v[i])
				s1.pop();
			while(!s2.empty() && s2.top() <= v[j])
				s2.pop();

			s1.push(v[i]);
			s2.push(v[j]);
		}
		reverse(b.begin(),b.end());
		for(int i = 0; i < n; ++i)
			cout << a[i] + b[i] + 1 << " ";
		cout << endl;
	}
	return 0;
}
