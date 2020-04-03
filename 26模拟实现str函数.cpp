//#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<iostream>
//using namespace std;
//
////strlen
//int my_strlen(char * str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
////strcpy
//char * my_strcpy(char * dest, const char* src)
//{
//	if (dest == nullptr || src == nullptr)
//		return nullptr;
//
//	char * ret = dest;
//	while (*(dest++) = *(src++))
//	{
//		;
//	}
//	return ret;
//}
//
//
////strcat
//char * my_strcat(char * dest, const char* src)
//{
//	if (dest == nullptr || src == nullptr)
//		return nullptr;
//
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
////strcmp
//int my_strcmp(char* dest, char* src)
//{
//	if (dest == nullptr || src == nullptr)
//		return 0;
//
//	while (*dest == *src)
//	{
//		if (*dest == '\0')
//		{
//			return 0;
//		}
//		dest++;
//		src++;
//	}
//	int ret = *dest - *src;
//	if (ret > 0)
//	{
//		ret = 1;
//	}
//	else if  (ret < 0)
//	{
//		ret = -1;
//	}
//	return ret;
//}
//
////strstr
//char* my_strstr(const char* dest, const char* src)
//{
//	if (dest == nullptr || src == nullptr)
//		return nullptr;
//
//	const char* s1 = nullptr;
//	const char* s2 = nullptr;
//	const char* cp = dest;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = src;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			++s1;
//			++s2;
//			
//		}
//		if (*s2 == '\0')
//			return (char*)cp;
//		cp++;
//	}
//	return nullptr;
//}
//const char* my_strstr2(const char* dest, const char* str)
//{
//	//assert(dest != NULL);
//	//assert(str != NULL);
//
//	const char* str1 = dest;
//	const char* str2 = str;
//
//	while (*str1)
//	{
//		if (*str1 == *str2)
//		{
//			const char* ret = str1;
//			const char* tmp1 = str1;
//			const char* tmp2 = str2;
//			while (*tmp2)
//			{
//				if (*tmp1 != *tmp2)
//					break;
//				*tmp1++;
//				*tmp2++;
//			}
//			if (*tmp2 == '\0')
//				return ret;
//		}
//		str1++;
//	}
//	return NULL;
//}
//int main()
//{
//	//char * arr = "123456";
//	//cout << my_strlen(arr) << endl;
//
//	//char str1[] = "123";
//	//char str2[] = "34567";
//	//cout << my_strcpy(str1, str2) << endl;
//
//	//char str1[] = "123";
//	//char str2[] = "456";
//	//cout << my_strcat(str1, str2) << endl;
//
//	//char str1[] = "123";
//	//char str2[] = "12567";
//	//cout << my_strcmp(str1, str2) << endl;
//
//	char *str1 = "1234567";
//	char *str2 = "34";
//	cout << my_strstr2(str1, str2) << endl;
//	system("pause");
//}