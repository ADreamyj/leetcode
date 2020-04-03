#define _CRT_SECURE_NO_WARNINGS  1

#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> Find1(vector<int> v, int target)
{
	vector<int> a;
	for (int i = 0; i < v.size() - 1; i++)
	{
		for (int j = i + 1; j < v.size(); j++)
		{
			if (v[i] + v[j] == target)
			{
				a.push_back(i);
				a.push_back(j);
				break;
			}
		}
	}
	for (int i = 0; i < a.size(); i++)
	{
		std::cout << a[i] << endl;
	}
	return a;
}

vector<int> Find2(vector<int> nums, int target)
{
	map<int, int> m;//�ṩһ��һ��hash
	vector<int> v(2, -1);//�������ؽ������ʼ��һ����СΪ2��ֵΪ-1������b

	for (int i = 0; i < nums.size(); i++)
	{
		if (m.count(target - nums[i]) > 0)//map��count���÷�������һ��Ԫ���Ƿ���ڡ�
		{
			v[0] = m[target - nums[i]];
			v[1] = i;
			break;
		}
		m[nums[i]] = i;
	}

	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << endl;
	}
	return v;
}
int main()
{
	vector<int> a = { 2, 7, 8, 10 };
	int target = 15;
	Find1(a, target);
	Find2(a, target);
	system("pause");
	return 0;
}