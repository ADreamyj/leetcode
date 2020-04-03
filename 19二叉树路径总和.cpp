//#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
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
////二叉树的路径总和1，如果有路径的话，就返回true
//bool haspath1(TreeNode * root, int sum)
//{
//	if (root == nullptr)
//		return false;
//
//	sum -= root->_val;
//	if (root->_left == nullptr && root->_right == nullptr)
//		return sum == 0;
//	return haspath1(root->_left, sum) || haspath1(root->_right, sum);
//}
//
////二叉数的路径总和2：用数组输出
//void path2(TreeNode* root, int sum, vector<vector<int>>& vv, vector<int>& v)
//{
//
//	sum -= root->_val;
//	v.push_back(root->_val);
//
//	if (sum == 0 && root->_left == nullptr && root->_right == nullptr)
//	{
//		vv.push_back(v);
//		return;
//	}
//	
//	if (root->_left)
//	{
//		path2(root->_left, sum, vv, v);
//		v.pop_back();
//	}
//
//	if (root->_right)
//	{
//		path2(root->_right, sum, vv, v);
//		v.pop_back();
//	}
//}
//vector<vector<int>> haspath2(TreeNode * root, int sum)
//{
//	vector<vector<int>> vv;
//	if (root == nullptr)
//		return vv;
//
//	vector<int> v;
//	path2(root, sum, vv, v);
//}
//
////二叉树的路径总和3：有几条路径就输出值为几。
////递归操作
//
//int path3(TreeNode* root, int sum)
//{
//	if (root == nullptr)
//		return 0;
//
//	sum -= root->_val;
//	return sum == 0 ? 1 : 0 + path3(root->_left, sum) + path3(root->_right, sum);
//}
//int haspath3(TreeNode* root, int sum)
//{
//	if (root == nullptr)
//		return 0;
//
//	return path3(root, sum) + haspath3(root->_left, sum) + haspath3(root->_right, sum);
//}
//
//
//int main()
//{
//	TreeNode* n1 = new TreeNode(2);
//	TreeNode* n2 = new TreeNode(3);
//	TreeNode* n3 = new TreeNode(4);
//	TreeNode* n4 = new TreeNode(5);
//	TreeNode* n5 = new TreeNode(6);
//	TreeNode* n6 = new TreeNode(7);
//	TreeNode* n7 = new TreeNode(8);
//	n1->_left = n2;
//	n1->_right = n3;
//	n2->_left = n4;
//	n2->_right = n5;
//	n3->_left = n6;
//	n3->_right = n7;
//	int sum = 10;
//	cout << haspath1(n1, sum) << endl;
//	//haspath2(n1, sum);
//	//cout << haspath3(n1, sum) << endl;
//	system("pause");
//	return 0;
//}