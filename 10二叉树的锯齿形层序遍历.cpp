//#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
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
//vector<vector<int>> LeoveOrder(TreeNode * root)
//{
//	vector<vector<int>> vv;
//	if (root == nullptr)
//		return vv;
//
//	queue<TreeNode* >q;
//	q.push(root);
//	int flag = 0;
//
//	while (!q.empty())
//	{
//		vector<int> v;
//		int n = q.size();
//		while (n--)
//		{
//			TreeNode* node = q.front();
//			v.push_back(node->_val);
//
//			if (node->_left)
//				q.push(node->_left);
//			if (node->_right)
//				q.push(node->_right);
//			q.pop();
//
//		}
//		if (flag % 2 == 1)
//		{
//			reverse(v.begin(), v.end());
//		}
//
//		vv.push_back(v);
//		flag++;
//	}
//	for (int i = 0; i < vv.size(); i++)
//	{
//		for (int j = 0; j < vv[i].size(); j++)
//		{
//			cout << vv[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return vv;
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
//
//	LeoveOrder(a1);
//
//	system("pause");
//	return 0;
//}