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
//int maxdeep(TreeNode* head)
//{
//	/*if (head == nullptr)
//		return 0;
//	int left = maxdeep(head->_left);
//	int right = maxdeep(head->_right);
//	return left > right ? left + 1 : right + 1;*/
//
//	if (head == nullptr)
//		return 0;
//
//	queue<TreeNode*> q;
//	TreeNode* cur = head;
//	q.push(cur);
//	int deep = 0;
//
//	while (!q.empty())
//	{
//		deep++;
//		int n = q.size();
//		while (n--)
//		{
//			TreeNode* node = q.front();
//			q.pop();
//			if (node->_left)
//				q.push(node->_left);
//			if (node->_right)
//				q.push(node->_right);
//		}
//	}
//	return deep;
// }
//int main()
//{
//	TreeNode* a1 = new TreeNode(1);
//	TreeNode* a2 = new TreeNode(2);
//	TreeNode* a3 = new TreeNode(3);
//	TreeNode* a4 = new TreeNode(4);
//	a1->_left = a2;
//	a1->_right = a3;
//	a2->_left = a4;
//	cout << maxdeep(a1) << endl;;
//	system("pause");
//	return 0;
//}