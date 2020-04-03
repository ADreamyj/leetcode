//#define _CRT_SECURE_NO_WARNINGS  1
//
////二叉树的后序遍历是一个非常重要的题目，基本上都会被考察，所以要深刻理解
//#include<iostream>
//#include<vector>
//
//#include<stack>
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
//vector<int> Order(TreeNode* root)
//{
//	vector<int> v;
//	stack<TreeNode*> st;
//
//	TreeNode* cur = root;
//	TreeNode* prev = nullptr;
//	while (cur || !st.empty())
//	{
//		while (cur)
//		{
//			st.push(cur);
//			cur = cur->_left;
//		}
//		cur = st.top();
//
//		//若右节点已经访问过或者没有右节点  则输出该节点值
//		if (cur->_right == nullptr || cur->_right == prev)
//		{
//			st.pop();
//			v.push_back(cur->_val);
//			prev = cur;
//			cur = nullptr;
//		}
//		else
//		{
//			cur = cur->_right;
//			prev = nullptr;
//		}
//	}
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << endl;
//	}
//	return v;
//}
//int main()
//{
//	TreeNode* a1 = new TreeNode(1);
//	TreeNode* a2 = new TreeNode(2);
//	TreeNode* a3 = new TreeNode(3);
//	TreeNode* a4 = new TreeNode(4);
//	a1->_left = a2;
//	a1->_right = a3;
//	a2->_left = a4;
//	Order(a1);
//	system("pause");
//	return 0;
//}