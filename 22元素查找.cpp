#define _CRT_SECURE_NO_WARNINGS  1

#include<iostream>
#include<vector>

using namespace std;
//
//int findElement(vector<int> a, int n, int x) {
//	int left = 0, right = n - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
//		if (a[mid] == x)
//			return mid;
//
//		// [left, mid][mid,right]
//		if (a[left] < a[mid])
//		{
//			if (a[left] <= x && x < a[mid])
//				right = mid - 1;
//			else
//				left = mid + 1;
//		}
//		else
//		{
//			if (a[mid] < x && x <= a[right])
//				left = mid + 1;
//			else
//				right = mid - 1;
//		}
//	}
//
//	return -1;
//}
//
//int main()
//{
//	vector<int> v = { 7, 8, 9, 1, 2, 3, 4, 5, 6 };
//	int x = 9;
//	int n = 9;
//	cout << findElement(v, n, x);
//	system("pause");
//	return 0;
//}

//char * my_strstr(const char* str1, const char * str2)
//{
//	if (str1 == nullptr || str2 == nullptr)
//		return nullptr;
//	const char * s1 = nullptr;
//	const char * s2 = nullptr;
//	const char * cp = str1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//			if (*s2 == '\0')
//				return (char*)cp;
//		}
//		cp++;
//	}
//	return nullptr;
//}
//
//int main()
//{
//	char str1[] = "ccdaaac";
//	char str2[] = "aac";
//	char* ch = my_strstr(str1, str2);
//	if (ch != nullptr)
//	{
//		cout << ch << endl;
//	}
//	else
//	{
//		cout << "not exist" << endl;
//	}
//	system("pause");
//	return 0;
//}

//void * my_memory(void * desc, const void * src, size_t  count)
//{
//	void * ret = desc;
//	while (count--)
//	{
//		*(char*)desc = *(char *)src;
//		desc = (char*)desc + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int str1[] = {0};
//	int str2[20] = { 2, 2, 5, 4, 5, 6 };
//	void * ret = my_memory(str1, str2, 12);
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << *((int*)ret + i) << endl;
//	}
//	system("pause");
//	return 0;
//}

//void* my_memory(void* dest, const void* src, size_t count)
//{
//	void * ret = dest;
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		if (count)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 5, 3, 9, 8, 6, 3 };
//	void* ret = my_memory(arr1 + 2, arr1, 16);
//	for (int i = 0; i < 4; i++)
//	{
//		cout << *((int*)ret + i) << endl;
//	}
//	system("pause");
//	return 0;
//}
//void* my_memset(void * src, char c, size_t n)
//{
//	void * ret = src;
//	char* desc = (char*)src;
//	while (n--)
//	{
//		*desc = c;
//		desc++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char s2[] = "abcdef";
//	void* ret = my_memset(s2, 'b', 6);
//	for (int i = 0; i < 6; i++)
//	{
//		cout << *((char*)ret + 1) << endl;
//	}
//	system("pause");
//	return 0;
//}