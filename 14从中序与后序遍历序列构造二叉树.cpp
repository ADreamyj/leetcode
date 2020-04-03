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
//TreeNode* BuildTree(vector<int> & ino, vector<int> & post)
//{
//	int len = post.size();
//	
//	if (len == 0)
//		return nullptr;
//	TreeNode* head = new TreeNode(post[len - 1]);
//	vector<int> i_left, i_right, p_left, p_right;
//	int index = 0;
//
//	for (int i = 0; i < len; i++)
//	{
//		if (post[len - 1] == ino[i])
//		{
//			index = i;
//			break;
//		}
//	}
//
//	for (int i = 0; i < index; i++)
//	{
//		i_left.push_back(ino[i]);
//		p_left.push_back(post[i]);
//	}
//
//	for (int j = index + 1; j < len; j++)
//	{
//		i_right.push_back(ino[j]);
//		p_right.push_back(post[j]);
//	}
//
//	head->_left = BuildTree(i_left, p_left);
//	head->_right = BuildTree(i_right, i_left);
//	return head;
//
//}
//int main()
//{
//
//	vector<int> ino = { 9, 3, 15, 20, 7 };
//	vector<int> post = { 9, 15, 7, 20, 3 };
//	BuildTree(ino, post);
//	system("pause");
//	return 0;
//}