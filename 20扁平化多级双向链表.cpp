//#define _CRT_SECURE_NO_WARNINGS  1
//
//#include<iostream>
//#include<stack>
//
//using namespace std;
//
//struct Node{
//	Node* _next;
//	Node* _prev;
//	Node* _child;
//	int _val;
//	Node(int val)
//		:_next(nullptr)
//		, _prev(nullptr)
//		, _child(nullptr)
//		, _val(val)
//	{}
//};
//
//Node* flatten(Node* head) {
//	if (!head)   
//		return nullptr;
//	Node *cur;
//	stack <Node*> stk;//常规解法，将所有节点进行压栈操作。
//	stk.push(head);
//
//	Node *pre = nullptr;
//
//	while (!stk.empty())
//	{
//		cur = stk.top();
//		stk.pop();
//		if (cur->_next)//先找下一个节点
//		{
//			stk.push(cur->_next);
//		}
//
//		if (cur->_child)//然后找孩子节点
//		{
//			stk.push(cur->_child);
//			cur->_child = nullptr;
//		}
//
//		if (pre)//通过前一个节点保存child节点的其哪一个位置。
//		{
//			pre->_next = cur;
//			cur->_prev = pre;
//		}
//		pre = cur;
//	}
//	return head;
//}
//
//int main()
//{
//	Node* n1 = new Node(1);
//	Node* n2 = new Node(2);
//	Node* n3 = new Node(3);
//	Node* n4 = new Node(4);
//	Node* n5 = new Node(5);
//	Node* n6 = new Node(6);
//	Node* n7 = new Node(7);
//	Node* n8 = new Node(8);
//	Node* n9 = new Node(9);
//	Node* n10 = new Node(10);
//	n1->_next = n2;
//	n2->_prev = n1;
//
//	n2->_next = n3;
//	n3->_prev = n2;
//
//	n3->_next = n4;
//	n4->_prev = n3;
//
//	n4->_next = n5;
//	n5->_prev = n4;
//
//	n5->_next = n6;
//	n6->_prev = n5;
//
//	n3->_child = n7;
//
//	n7->_next = n8;
//	n8->_prev = n7;
//
//	n8->_next = n9;
//	n9->_prev = n8;
//
//	n9->_next = n10;
//	n10->_prev = n9;
//	
//	flatten(n1);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << n1->_val << " ";
//		n1 = n1->_next;
//	}
//	system("pause");
//}