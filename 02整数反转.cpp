//#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<iostream>
//
//
//int Reverse(int a)
//{
//	long long ret = 0;
//	while (a)
//	{
//		ret = ret * 10 + a % 10;//依次取出最后一位，然后依次乘十；
//		a /= 10;
//		if (ret > INT_MAX || ret < INT_MIN)
//			return 0;
//	}
//	std::cout << ret << std::endl;
//	return (int)ret;
//}
//
//int main()
//{
//	std::cout << "请输入一个数" << std::endl;
//	int a;
//	while (std::cin >> a)
//		Reverse(a);
//	system("pause");
//	return 0;
//}