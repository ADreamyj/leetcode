// 画家小Q又开始他的艺术创作。小Q拿出了一块有NxM像素格的画板, 画板初始状态是空白的,用'X'表示。
// 小Q有他独特的绘画技巧,每次小Q会选择一条斜线, 如果斜线的方向形如'/',即斜率为1,小Q会选择这条斜线中的一段格子,都涂画为蓝色,用'B'表示;如果对角线的方向形如'\',即斜率为-1,小Q会选择这条斜线中的一段格子,都涂画为黄色,用'Y'表示。
// 如果一个格子既被蓝色涂画过又被黄色涂画过,那么这个格子就会变成绿色,用'G'表示。
// 小Q已经有想画出的作品的样子, 请你帮他计算一下他最少需要多少次操作完成这幅画。

// 输入描述:
// 每个输入包含一个测试用例。
// 每个测试用例的第一行包含两个正整数N和M(1 <= N, M <= 50), 表示画板的长宽。
// 接下来的N行包含N个长度为M的字符串, 其中包含字符'B','Y','G','X',分别表示蓝色,黄色,绿色,空白。整个表示小Q要完成的作品。
//
//
// 输出描述:
// 输出一个正整数, 表示小Q最少需要多少次操作完成绘画。

// 输入
// 4 4
// YXXB
// XYGX
// XBYY
// BXXY
// 输出
// 3

#include <iostream>
#include <vector>

void isprime(std::vector<std::vector<char>> & vv,int n,int m,int x,int y,int & ans){
	char ch = vv[x][y];
	vv[x][y] = 'X';
	int i,j;
	if(ch == 'B'){
		i = x+1, j = y-1;
		while(i < n && j > -1){
			if(vv[i][j] == ch)
				vv[i][j] = 'X';
			else if(vv[i][j] == 'G')
				vv[i][j] = 'Y';
			else
				break;
			++i,--j;
		}
	}else{
		i = x+1,j = y+1;
		while(i < n && j < m){
			if(vv[i][j] == ch)
				vv[i][j] = 'X';
			else if(vv[i][j] == 'G')
				vv[i][j] = 'B';
			else
				break;
			++i,++j;
		}
	}
	ans += 1;
}

int main(){
	int n,m;
	while(std::cin >> n >> m){
		std::vector<std::vector<char>> vv(n,std::vector<char>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				std::cin >> vv[i][j];
			}
		}

		int ans = 0;
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				if(vv[i][j] == 'X')
					continue;
				else if(vv[i][j] == 'B')
					isprime(vv,n,m,i,j,ans);
				else if(vv[i][j] == 'Y')
					isprime(vv,n,m,i,j,ans);
				else{
					vv[i][j] = 'B';
					isprime(vv,n,m,i,j,ans);
					vv[i][j] = 'Y';
					isprime(vv,n,m,i,j,ans);
				}
			}
		}
		std::cout << ans << std::endl;
	}
	return 0;
}
