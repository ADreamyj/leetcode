// 某个推荐系统会推荐出一系列的视频和图片结果，视频用V表示，图片用P表示，现在需要对推荐系统返回的结果进行打散，使得【图片P】的结果每N个里面最多出现1个，并且保证图片最早出现的位置不变，图片之前的相对顺序不变；
// 例如："V_0", "V_1", "V_2", "P_3", "P_4", "P_5", "V_6", "P_7", "V_8", "V_9"
// 表示： 10个结果中，位置 [0 1 2 6 8 9] 是 视频V的结果；位置 [3 4 5 7] 是 图片P的结果；
// 如果 要求 图片P 每3个里最多出1个，那么打散后的结果为： "V_0", "V_1", "V_2", "P_3", "V_6", "V_8", "P_4", "V_9" （P_5 和 P_7 满足不了打散要求 被删除）
// 如果 要求 图片P 每2个里最多出1个，那么打散后的结果为： "V_0", "V_1", "V_2", "P_3", "V_6", "P_4", "V_8", "P_5", "V_9", "P_7" 

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct node{
	string s;
	int num;
};

int main(){
	int N,M;
	while(cin >> N >> M){
		vector<node> anscon;//输入数组
		vector<string> v;//输出数组
		for(int i = 0; i < M; i++){
			node a;
			cin >> a.s;
			a.num = 1;
			anscon.push_back(a);
		}

		int pvmove = 0;//移动指针
		int count = 0;//输出最后的个数
		for(int i = 0; i < anscon.size(); i++){
			if(anscon[i].s[0] == 'V' && anscon[i].num == 1){
				count++;
				v.push_back(anscon[i].s);
				anscon[i].num = 0;
			}
			else if(anscon[i].s[0] == 'P' && anscon[i].num == 1 && pvmove < anscon.size()){
				count++;
				v.push_back(anscon[i].s);
				anscon[i].num = 0;
				pvmove = i;//从当前位置向后找
				int n = N - 1;
				while(pvmove < anscon.size() && n > 0){
					if(anscon[pvmove].s[0] == 'V' && anscon[pvmove].num == 1){
						n--;
						v.push_back(anscon[pvmove].s);
						count++;
						anscon[pvmove].num = 0;
					}
					if(n != 0)
						pvmove++;
				}
				if(pvmove >= anscon.size())
					break;
			}
		}
		cout << count << endl;
		for(int i = 0 ; i < v.size(); i++)
			cout << v[i] << endl;
	}
}
