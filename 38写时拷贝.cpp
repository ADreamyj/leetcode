//#define _CRT_SECURE_NO_WARNINGS  1
//#include <iostream>
//#include <algorithm>
//#include <cassert>
//using namespace std;
//
//namespace bit
//{
//	class string
//	{
//	public:
//
//		string(const char* str = "")
//			:pCount(new int(1))
//		{
//			if (str == nullptr)
//				str = "";
//			_str = new char[strlen(str) + 1];
//			strcpy(_str, str);
//		}
//
//		string(string& s)
//			:_str(s._str)
//			, pCount(s.pCount)
//		{
//			(*pCount)++;
//		}
//
//		void Release()
//		{
//			if (_str && (--(*pCount)) == 0)
//			{
//				delete[] _str;
//				delete pCount;
//				_str = nullptr;
//				pCount = nullptr;
//			}
//		}
//
//		//s1=s3;
//		//s2=s4;
//
//		string& operator=(string& s)
//		{
//			if (this != &s)
//			{
//				//��ֵҪ�����Ƿ�ֻ��һ�����������Դ
//				Release();
//				_str = s._str;
//				(*(s.pCount))++;
//				pCount = s.pCount;
//			}
//			return *this;
//		}
//
//		char& operator[](size_t pos)
//		{
//			//���ܸ��Ķ�������ݣ����¹���ͬһ����ַ�Ķ������ݶ�����
//			if ((*pCount) > 1)
//			{
//				string Temp(_str);
//				swap(_str, Temp._str);
//				swap(pCount, Temp.pCount);
//			}
//			assert(pos < strlen(_str));
//			return _str[pos];
//		}
//
//		const char& operator[](size_t pos) const
//		{
//			assert(pos < strlen(_str));
//			return _str[pos];
//		}
//
//		~string()
//		{
//			Release();
//		}
//
//	private:
//		char* _str;
//		//��һ��ָ������¼ÿ������ļ���
//		int* pCount;
//	};
//}
//void TestFunc()
//{
//	bit::string s1("hello");
//	bit::string s2(s1);
//	bit::string s3("world");
//	bit::string s4(s3);
//
//	s1 = s3;
//	s2 = s4;
//	s1[0] = 'H';
//	s1[0] = 'W';
//}
//int main()
//{
//	TestFunc();
//	system("pause");
//	return 0;
//}