// 现有一个3 * 3规格的智能手机锁屏程序和两个正整数m和n，请计算出使用最少m个键
// 和最多n个键可以解锁该屏幕的所有有效模式总数
//
// 其中有效模式是指：
// 1.每个模式必须连接至少m个键和最多n个键；
// 2.所有的键必须是不同的；
// 3.如果在模式中连接两个连续键的行通过任何其他键，则其他键必须在模式中选择，不允许跳过非选择键；
// 4.顺序相关，单键有效；


// 输入
// 1，2
// 输出
// 65
// 说明：输入m = 1，n = 2，表示最少1个键，最多2个键，符合要求的键数是1个键和2个键，
// 其中1个键的有效模式有9种，两个键的有效模式有56种，所有最终有效模式是
// 9 + 56 = 65种，最终输出65。

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void move(vector<vector<int>> & board, int i, int j, int k, int m, int n, int &ans){
	//如果已经走过的点数大于等于m，则是有效路径，ans++
	if(k >= m)
		ans++;
	//如果已经走过的点数等于n，则不需要继续探索，故返回
	if(k == n)
		return ;
	//如果已经走过的点数小于n，则还可以继续探索
	for(int x = -2; x <= 2; x++){
		for(int y = -2; y <= 2; y++){
			if(i + x >= 0 && i + x <= 2 && j + y >= 0 && j + y <= 2 && board[i + x][j + y] == 0){
				if(x % 2 || y % 2 || (!(x%2) && !(y%2) && board[i + x/2][j + y/2] == 1)){
					board[i + x][j + y] = 1;
					move(board,i + x,j + y,k + 1,m,n,ans);
					board[i + x][j + y] = 0;
				}
			}
		}
	}
	return ;
}

int solution(int m, int n){
	vector<vector<int>> board(3,vector<int> (3,0));
	int ans = 0;
	//如果n等于0，则直接返回0；
	if(n == 0)
		return ans;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			board[i][j] = 1;
			move(board,i,j,1,m,n,ans);
			board[i][j] = 0;
		}
	}
	return ans;
}

int main(){
	int m,n;
	while(cin >> m >> n){
		cout << solution(m,n) << endl;
	}
	return 0;
}
