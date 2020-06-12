// 小Q今天在上厕所时想到了这个问题：有n个数，两两组成二元组，相差最小的
// 有多少对呢？相差最大呢？

#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	int n,i,j;
	while(std::cin >> n){
		if(n < 2){
			std::cout << 0 << " " << 0 << std::endl;
			continue;
		}
		std::vector<int> v(n);
		for(i = 0; i < n; ++i)
			std::cin >> v[i];
		sort(v.begin(),v.end());

		// 求最小值min_val
		int min_val = v[1] - v[0];
		for(i = 1; i < n - 1; ++i){
			int cur = v[i + 1] - v[i];
			if(cur < min_val)
				min_val = cur;
		}
		// 求最小值的个数min_count
		int min_count = 0;
		if(min_val == 0){
			for(i = 0; i < n - 1; ++i){
				for(j = i + 1;j < n; ++j){
					if(v[i] == v[j])
						++min_count;
				}
			}
		}else{
			for(i = 0; i < n - 1; ++i){
				int cur = v[i + 1] - v[i];
				if(cur == min_val)
					++min_count;
			}
		}

		//求最大值max_val
		int max_val = v[n - 1] - v[0];
		//求最大值的个数max_count
		int max_count = 0;
		if(max_val == 0){
			max_count = n * (n - 1)/2;
		}else{
			int small_count = 0,big_count = 0;
			for(i = 0; i < n; ++i){
				if(v[i] == v[0])
					++small_count;
				else if(v[i] == v[n - 1])
					++big_count;
			}
			max_count = small_count * big_count;
		}
		std::cout << min_count << " " << max_count << std::endl;
	}
}
