//#define _CRT_SECURE_NO_WARNINGS  1
//
////二叉树的前序遍历是一道非常经典的题目
//
//#include<iostream>
//#include<vector> //因为最后是拿一个数组进行存储的，所有用vector
//#include<stack>
//using namespace std;
//
//struct TreeNode
//{
//	TreeNode* _left;
//	TreeNode* _right;
//	int _val;
//	TreeNode(int val)
//	{
//		_left = nullptr;
//		_right = nullptr;
//		_val = val;
//	}
//};
////vector<int> ret;
////void peror(TreeNode* root)
////{
////	if (root == nullptr)
////		return;
////
////	ret.push_back(root->_val);
////	peror(root->_left);
////	peror(root->_right);
////}
////vector<int> Peror1(TreeNode* root)
////{
////	peror(root);
////	for (int i = 0; i < ret.size(); i++)
////	{
////		cout << ret[i] << endl;
////	}
////	return ret;
////}
//
//vector<int> Peror2(TreeNode* root)
//{
//	vector <int> v;
//	stack<TreeNode*> st;
//	TreeNode* cur = root;
//
//	while (cur || !st.empty())
//	{
//		while (cur)
//		{
//			st.push(cur);
//			v.push_back(cur->_val);
//			cur = cur->_left;
//		}
//		TreeNode* top = st.top();//如果为空的话，就必须将上一个元素出栈
//		st.pop();                //去访问它的右子树上的元素。
//		cur = top->_right;
//	}
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << endl;
//	}
//	return v;
//}
//
//int main()
//{
//
//
//	TreeNode* a1 = new TreeNode(1);
//	TreeNode* a2 = new TreeNode(2);
//	TreeNode* a3 = new TreeNode(3);
//	TreeNode* a4 = new TreeNode(4);
//	a1->_left = a2;
//	a1->_right = a3;
//	a2->_left = a4;
//	Peror2(a1);
//	system("pause");
//	return 0;
//}