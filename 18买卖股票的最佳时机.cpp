//#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////������Ʊ�����ʱ��
////1��ֻ����һ�Σ�Ȼ�����������������
//int Buy1(vector<int>& prices)
//{
//	//������ö�̬�滮�������
//	int res = 0;//ǰi���ù�Ʊ����������档
//	int min_val = INT_MAX;//ǰi���Ʊ����Сֵ��
//	for (int i = 0; i < prices.size(); i++) {
//		min_val = min(min_val, prices[i]);
//		res = max(res, prices[i] - min_val);
//	}
//	return res;
//}
//
////2.���������Σ�������Σ����������
//int Buy2(vector<int> & prices)
//{
//	int ret = 0;
//	for (int i = 1; i < prices.size(); i++)
//	{
//		if (prices[i - 1] < prices[i])
//			ret += prices[i] - prices[i - 1];
//	}
//	return ret;
//}
//int main()
//{
//	vector<int> prices = { 7, 1, 5, 3, 6, 4 };
//	cout << Buy1(prices) << endl;
//	cout << Buy2(prices) << endl;
//	system("pause");
//
//}