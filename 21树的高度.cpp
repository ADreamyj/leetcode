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
//	vector<int>nodes(1000, 0);//��Ч�ڵ�ĸ߶�
//	nodes[0] = 1;// ��Ŀ˵��������һ���ڵ㣬�߶�ֻ��1
//	vector<int>childnum(1000, 0);//��¼�ڵ�ĺ�������
//	cin >> n;
//	while (--n)
//	{
//		cin >> f >> c;
//		//����㲻���ڣ����߸��ڵ��Ѿ��������ӽ�������
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