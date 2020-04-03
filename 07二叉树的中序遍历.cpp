//#define _CRT_SECURE_NO_WARNINGS  1
//
//二叉树的中序遍历
//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
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
//vector<int> ret;
//
//void inorder(TreeNode* root)
//{
//	if (root == nullptr)
//		return;
//
//	inorder(root->_left);
//	ret.push_back(root->_val);
//	inorder(root->_right);
//}
//vector<int> Inorder(TreeNode* root)
//{
//	inorder(root);
//	for (int i = 0; i < ret.size(); i++)
//	{
//		cout << ret[i] << endl;
//	}
//	return ret;
//}

//vector<int> Inorder2(TreeNode* root)
//{
//	vector<int>v;
//	stack<TreeNode*> st;
//
//	TreeNode* cur = root;
//	while (cur || !st.empty())
//	{
//		while (cur)
//		{
//			st.push(cur);
//			cur = cur->_left;
//		}
//		
//		TreeNode* top = st.top();
//		st.pop();
//		v.push_back(top->_val);
//		cur = top->_right;
//	}
//
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
//	a2->_right = a4;
//
//	Inorder2(a1);
//	system("pause");
//	return 0;
//}