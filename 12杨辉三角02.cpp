//#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<iostream>
//#include<vector>
//using namespace std;
//

//������������������е�һ�е����֣��������ð����е�������Ƕ���������
//Ҳ����Ҫ���ٸ���Ŀռ䣬ֻ��Ҫ����Ҫ����һ�������������ˡ�

//vector<int> nums(int n)
//{
//	vector<int> v(n + 1, 0);
//	v[0] = 1;
//	for (int i = 1; i < n + 1; i++)
//	{
//		for (int j = i; j >= 1; j--)
//		{
//			v[j] += v[j - 1];
//		}
//	}
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	return v;
//}
//int main()
//{
//	int n = 6;
//	nums(n);
//	system("pause");
//	return 0;
//}