// 给定一个数组序列，需要求选出一个区间，使得该区间是所有区间中经过如下计算的值中最大的一个
// 区间中的最小数*区间所有数的和最后程序输出经过计算后的最大值即可，不需要输出具体的区间
// 给定序列[6,2,1]则根据上述公式，可得到所有可以选定各个区间的计算值

#include <iostream>
#include <vector>

int main(){
	int n;
	while(std::cin >> n){
		std::vector<int> v(n);
		for(int i = 0; i < n; ++i)
			std::cin >> v[i];
		int valmax = v[0] * v[0];
		for(int i = 0; i < n; ++i){
			int valsum = 0;
			int valmin = v[0];
			for(int j = i; j < n; ++j){
				if(v[j] == 0)
					break;
				valsum += v[j];
				if(valmin > v[j])
					valmin = v[j];
				if(valmax < valsum * valmin)
					valmax = valsum * valmin;
			}
		}
		std::cout << valmax << std::endl;
	}
	return 0;
}
