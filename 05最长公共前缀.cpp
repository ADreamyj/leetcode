#define _CRT_SECURE_NO_WARNINGS  1

#include<iostream>
#include<vector>
using namespace std;

string Find(vector<string> v)
{
	string ret = "";
	if (v.empty())
		return ret;

	int size = v.size();
	string min = v[0];
	for (int i = 1; i < size; i++)
	{
		if (min.size() > v[i].size())
			min = v[i];
	}
	//从第一个字符开始对比，若都一样，ans加上该字符，若不一样，返回答案
	for (int j = 0; j < min.size(); j++)
	{
		for (int m = 0; m < size; m++)
		{
			if (min[j] != v[m][j])
			{
				//for (int i = 0; i < ret.size(); i++)
				//{
				//	cout << ret[i] << " ";
				//}
				return ret;
			}
		}
		ret += min[j];
	}
	//for (int i = 0; i < ret.size(); i++)
	//{
	//	cout << ret[i] << " ";
	//}
	return ret;
}
int main()
{
	int n;
	vector<string> v;
	v.push_back("langxing");
	v.push_back("langren");
	v.push_back("lan");
	Find(v);
	system("pause");
	return 0;
}