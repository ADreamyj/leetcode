#define _CRT_SECURE_NO_WARNINGS  1

#include<iostream>
#include<stack>
using namespace std;

//int my_atoi(const char* str)
//{
//	int flag = 1;
//	long long ret = 0;
//
//	if (*str == '\0')
//		return 0;
//
//	while (*str == ' ')
//		++str;
//
//	if (*str == '+')
//	{
//		++str;
//	}
//	
//	if (*str == '-')
//	{
//		++str;
//		flag = -1;
//	}
//
//	while (*str)
//	{
//		if (*str <= '9' && *str >= '0')
//		{
//			ret = ret * 10 + flag * (*str - '0');
			//if (ret > INT_MAX || ret < INT_MIN)
			//{
			//	if (flag == -1)
			//	{
			//		return INT_MIN;
			//	}
			//	else
			//	{
			//		return INT_MAX;
			//	}
			//}
//			
//		}
//		else 
//		{
//			return ret;
//		}
//		++str;
//
//	}
//	return (int)ret;
//}

//char* itoa(char * str, int n, int base)
//{
//	char * dest = str;
//	if (n == 0)
//	{
//		*str++ = '0';
//		*str = '\0';
//		return dest;
//	}
//
//	stack<char> s;
//
//	if (base < 2 || base > 36)
//	{
//		*str = '\0';
//		return str;
//	}
//	int num = 1;
//	while (num)
//	{
//		num = n / base;
//		int value2 = n % base;
//		if (value2 < 10)
//		{
//			s.push(value2 + '0');
//		}
//		else
//		{
//			s.push(value2 - 10 + 'a');
//		}
//		n = num;
//	}
//	while (!s.empty())
//	{
//		*str++ = s.top();
//		s.pop();
//	}
//	*str = '\0';
//	return dest;
//}
//int main()
//{
//	//char * str = " -123 489";
//	//cout << my_atoi(str);
//	int n = 20;
//	char  str[100];
//	cout <<itoa(str, n, 2);
//	system("pause");
//	return 0;
//}

//double my_atof(const char* str)
//{
//
//	double ret = 0;
//	int count = 0;
//	int flag = 1;
//	while (*str == ' ')
//		++str;
//	while (*str)
//	{
//		if (count)
//		{
//			count *= 10;
//		}
//		if (*str == '+')
//		{
//			str++;
//		}
//		else if (*str == '-')
//		{
//			str++;
//			flag = -1;
//		}
//		else if (*str == '.')
//		{
//			count++;
//			str++;
//		}
//		else if (*str <= '9' && *str >= '0')
//		{
//			ret = ret * 10 + (*str - '0');
//			str++;
//		}
//		else
//			return 0;
//	}
//	return flag * ret / count;
//}
//
//int main()
//{
//	char * str = "-1215.6ab";
//	printf("%f\n",my_atof(str) );
//	system("pause");
//	return 0;
//}