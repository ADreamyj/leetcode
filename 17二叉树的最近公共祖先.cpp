//#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<iostream>
//#include<vector>
//#include<queue>
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
//bool getpath(vector<TreeNode *>& path, TreeNode* root, TreeNode* node)//算法牛逼，但是必须传引用。
//{
//	if (root == nullptr)
//		return false;
//
//	path.push_back(root);
//	if (root == node)
//		return true;
//
//	if (getpath(path, root->_left, node))
//		return true;
//
//	if (getpath(path, root->_right, node))
//		return true;
//
//	path.pop_back();
//	return false;
//
//}
//TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
//{
//	/*if (root == nullptr || root == p || root == q)
//		return root;
//
//	TreeNode* left = Common(root->_left, p, q);
//	TreeNode* right = Common(root->_right, p, q);
//	return left == nullptr ? right : (right == nullptr ? left : root);*/
//
//	vector<TreeNode *> path1, path2;
//	if (!getpath(path1, root, p) || !getpath(path2, root, q))
//		return nullptr;
//
//	int i = 1;
//	for (; i < path1.size() && i < path2.size(); i++)
//	{
//		if (path1[i] != path2[i])
//			return path1[i - 1];
//	}
//	return path1[i - 1];
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
//	cout << lowestCommonAncestor(a1, a3, a4)->_val;
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//template<typename T>
//class display
//{
//public:
//	void operator()(const T &x)
//	{
//		cout << x << " ";
//	}
//};
//int main()
//{
//	int ia[] = { 1, 2, 3, 4, 5 };
//	for_each(ia, ia + 5, display<int>());
//	system("pause");
//	return 0;
//}

