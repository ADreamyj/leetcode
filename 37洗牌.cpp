//#define _CRT_SECURE_NO_WARNINGS  1
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int T, n, k;
//	cin >> T;
//	while (T--)
//	{
//		cin >> n >> k;
//		vector<int> v(2 * n);
//		for (int i = 0; i < 2 * n; i++)
//		{
//			cin >> v[i];
//		}
//		while (k--)
//		{
//			vector<int> table(v);
//			//ѭ��ֻ����һ�룬һ�θպ��ҵ����������±�
//			for (int i = 0; i < n; i++)
//			{
//				//��������ҹ����ˣ��±�0��0���±�1��2���±�2��4
//				v[2 * i] = table[i];
//				//�±�3��1���±�4��3���±�5��5
//				v[2 * i + 1] = table[i + n];
//			}
//		}
//		for (int i = 0; i < v.size(); i++)
//		{
//			cout << v[i] << " ";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}