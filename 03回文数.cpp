//#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<iostream>
//
//
//bool Find(int a)
//{
//	if (a < 0 || (a % 10 == 0 && a != 0) || (a < INT_MIN) || (a > INT_MAX))
//	{
//		std::cout << "���ǻ�����" << std::endl;
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
//		std::cout << "�ǻ�����" << std::endl;
//	}
//	else
//	{
//		std::cout << "���ǻ�����" << std::endl;
//	}
//}
//int main()
//{
//	int a;
//	std::cout << "������һ����" << std::endl;
//	while (std::cin >> a)
//	{
//		Find(a);
//	}
//	system("pause");
//	return 0;
//}