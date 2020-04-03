//#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<iostream>
//
//
//bool Find(int a)
//{
//	if (a < 0 || (a % 10 == 0 && a != 0) || (a < INT_MIN) || (a > INT_MAX))
//	{
//		std::cout << "不是回文数" << std::endl;
//		return false;
//	}
//	int index = 0;
//
//	while (a > index)
//	{
//		index = index * 10 + a % 10;
//		a /= 10;
//	}
//	if (a == index || a == index / 10)
//	{
//		std::cout << "是回文数" << std::endl;
//	}
//	else
//	{
//		std::cout << "不是回文数" << std::endl;
//	}
//}
//int main()
//{
//	int a;
//	std::cout << "请输入一个数" << std::endl;
//	while (std::cin >> a)
//	{
//		Find(a);
//	}
//	system("pause");
//	return 0;
//}