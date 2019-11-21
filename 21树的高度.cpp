//#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<cstring>
//#include<vector>
//#include<cstdlib>
//using namespace std;
//
////5
////0 1
////0 2
////1 3
////1 4
//
////3
//int main()
//{
//	int n, H = 1;
//	int i = 0;
//	int f, c, h;
//	vector<int>nodes(1000, 0);//有效节点的高度
//	nodes[0] = 1;// 题目说了至少有一个节点，高度只是1
//	vector<int>childnum(1000, 0);//记录节点的孩子数量
//	cin >> n;
//	while (--n)
//	{
//		cin >> f >> c;
//		//父结点不存在，或者父节点已经有两个子结点就跳过
//		if (nodes[f] == 0 || childnum[f] == 2)
//			continue;
//		childnum[f] += 1;
//		h = nodes[f] + 1;
//		nodes[c] = h;
//		if (h > H)
//			H = h;
//	}
//	cout << H;
//	system("pause");
//}