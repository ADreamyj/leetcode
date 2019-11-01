//#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct TreeNode
//{
//	TreeNode* _left;
//	TreeNode* _right;
//	int _val;
//	TreeNode(int val)
//		:_left(nullptr)
//		, _right(nullptr)
//		, _val(val)
//	{}
//};
//
//TreeNode* BuildTree(vector<int> & pre, vector<int> & ino)
//{
//	int inolen = ino.size();
//	if (ino.size() == 0)
//		return nullptr;
//
//	vector<int> l_left, i_left, l_right, i_right;
//	int index;
//	TreeNode* head = new TreeNode(pre[0]);
//	for (int i = 0; i < inolen; i++)
//	{
//		if (pre[0] == ino[i])
//		{
//			index = i;
//			break;
//		}
//	}
//	for (int i = 0; i < index; i++)
//	{
//		l_left.push_back(pre[i + 1]);
//		i_left.push_back(ino[i]);
//	}
//
//	for (int j = index + 1; j < inolen; j++)
//	{
//		l_right.push_back(pre[j]);
//		i_right.push_back(ino[j]);
//	}
//	head->_left = BuildTree(l_left, i_left);
//	head->_right = BuildTree(l_right, i_right);
//	return head;
//}
//int main()
//{
//	vector<int> pre = { 3, 9, 20, 15, 7 };
//	vector<int> ino = { 9, 3, 15, 20, 7 };
//	BuildTree(pre, ino);
//	system("pause");
//	return 0;
//}