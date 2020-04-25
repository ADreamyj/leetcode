// 机器人正在玩一个古老的基于DOS的游戏。游戏中有N+1座建筑——从0到N编号，从左到右排列。编号为0的建筑高度为0个单位，编号为i的建筑的高度为H(i)个单位。 

// 起初， 机器人在编号为0的建筑处。每一步，它跳到下一个（右边）建筑。假设机器人在第k个建筑，且它现在的能量值是E, 下一步它将跳到第个k+1建筑。它将会得到或者失去正比于与H(k+1)与E之差的能量。如果 H(k+1) > E 那么机器人就失去 H(k+1) - E 的能量值，否则它将得到 E - H(k+1) 的能量值。

// 游戏目标是到达第个N建筑，在这个过程中，能量值不能为负数个单位。现在的问题是机器人以多少能量值开始游戏，才可以保证成功完成游戏？/ 说明：链接：https://www.nowcoder.com/questionTerminal/3d1adf0f16474c90b27a9954b71d125d?f=disc

// 输入描述：第一行输入，表示一共有N组数据
// 第二行是N个空格分隔的整数，H1,H2,H3,Hn代表建筑物的高度

// 输出描述： 输出一个单独的数表示完成游戏所需的最小单位的初始能量

// 输入 5
// 3 4 3 2 4

// 输出 4


#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> H(n,0);
	for(int i = 0; i < n; i++){
		cin >> H[i];
	}
	int e = 0;
	/*
	int temp;
	for(int j = n - 1; j >= 0; j--){
		//cout << "当前是第" << j << "个位置，此时的能量是" << e << "下一个H的高度为" << H[j + 1] << endl;
		temp = (e + H[j]) / 2;
		if((e + H[j]) % 2 != 0){
			temp += 1;
		}
		e = temp;
	}
	*/
	for(int i = n - 1; i >= 0; i--){
		e = (e + H[i] + 1) >> 1;
	}
	cout << e << endl;
	return 0;
}
