// 给定一个数独板的输入，确认当前的填法是否合法。
// 合法的输入需要满足以下三个条件：
// 1. 每一行的9个格子中是1-9的9个数字，且没有重复
// 2. 每一列的9个格子中是1-9的9个数字，且没有重复
// 3. 9个3*3的小格子中是1-9的9个格子，且没有重复


// 输入描述:
// 输入9行字符串，每行9个字符（不包含\r\n)，总共81个字符，空着的格子用字符‘X’表示
//
// 53XX7XXXX
// 6XX195XXX
// X98XXXX6X
// 8XXX6XXX3
// 4XX8X3XX1
// 7XXX2XXX6
// X6XXXX28X
// XXX419XX5
// XXXX8XX79
//
//
// 输出描述:
// 合法在输出字符串，“true”
// 非法则输出字符串，“false“

#include <iostream>
#include <vector>
using namespace std;

bool isRow(int row, vector<vector<char>> & vv){
	vector<char> v;
	for(int i = 0; i < 9; i++){
		if(vv[row][i] == 'X')
			continue;
		else
			v.push_back(vv[row][i]);

		for(int j = 0; j < v.size() - 1; j++){
			if(v[j] == vv[row][i])
				return false;
		}
	}
	return true;
}

bool isColumn(int column, vector<vector<char>> & vv){
	vector<char> v;
	for(int i = 0; i < 9; i++){
		if(vv[i][column] == 'X')
			continue;
		else
			v.push_back(vv[i][column]);

		for(int j = 0; j < v.size() - 1; j++){
			if(v[j] == vv[i][column])
				return false;
		}
	}
	return true;
}

bool isNine(int row, int column, vector<vector<char>> & vv){
	vector<char> v;
	for(int i = row; i < row + 3; i++){
		for(int j = column; j < column + 3; j++){
			if(vv[i][j] == 'X')
				continue;
			else
				v.push_back(vv[i][j]);
		
		for(int k = 0; k < v.size() - 1; k++){
			if(v[k] == vv[i][j])
				return false;
			}
		}
	}
	return true;
}

int main(){
	vector<vector<char>> vv(9,vector<char>(9,0));
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			cin >> vv[i][j];
		}
	}
	bool flag = true;
	for(int i = 0; i < 9; i++){
		if(isRow(i,vv) == false)
			flag = false;
	}
	for(int j = 0; j < 9; j++){
		if(isColumn(j,vv) == false)
			flag = false;
	}
	for(int i = 0; i < 9; i+=3){
		for(int j = 0; j < 9; j+=3){
			if(isNine(i,j,vv) == false)
				flag = false;
		}
	}
	if(flag)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}
