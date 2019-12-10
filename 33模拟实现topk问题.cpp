//#define _CRT_SECURE_NO_WARNINGS  1
//#include <iostream> 
//#include <vector>
//
//using namespace std;
//
//class MinHeap {
//
//private:
//	int maxsize;                // �ѵĴ�С
//	void filterDown(int begin); // ���µ����� 
//	vector<int> arr;
//
//public:
//	MinHeap(int k);        // ���캯�� 
//	void createMinHeap(int arr[]); // ������ 
//	void insert(int val);  // ����Ԫ�� 
//	int getTop();          // ��ȡ�Ѷ�Ԫ�� 
//	vector<int> getHeap(); //��ȡ���е�ȫ��Ԫ��
//};
//
//MinHeap::MinHeap(int k) {
//	maxsize = k;
//}
//
//
///**
//* ����С����
//*/
//void MinHeap::createMinHeap(int a[]) {
//	for (int i = 0; i < maxsize; i++) {
//		arr.push_back(a[i]);
//	}
//
//	for (int i = arr.size() / 2 - 1; i >= 0; i--) {
//		filterDown(i);
//	}
//}
//
//
///**
//* ����Ԫ��
//*/
//void MinHeap::insert(int val) {
//	if (val > getTop()) {
//		arr[0] = val;
//		filterDown(0);
//	}
//}
//
//
///**
//* ���µ���
//*/
//void MinHeap::filterDown(int current) {
//	int end = arr.size() - 1;
//	int child = current * 2 + 1; // ��ǰ�ڵ������
//	int val = arr[current];    // ���浱ǰ�ڵ�
//
//	while (child <= end) {
//		// ѡ�����������еĽ�С����
//		if (child < end && arr[child + 1] < arr[child])
//			child++;
//		if (val < arr[child]) break;
//		else {
//			arr[current] = arr[child]; //���ӽڵ㸲�ǵ�ǰ�ڵ�
//			current = child;
//			child = child * 2 + 1;
//		}
//	}
//	arr[current] = val;
//}
//
//
///**
//* ��ȡ�Ѷ�Ԫ��
//*/
//int MinHeap::getTop() {
//	if (arr.size() != 0)
//		return arr[0];
//	return NULL;
//}
//
//
///**
//* ��ȡ���е�ȫ��Ԫ��
//*/
//vector<int> MinHeap::getHeap() {
//	vector<int> heap;
//	for (int i = 0; i < arr.size(); i++)
//		heap.push_back(arr[i]);
//	return heap;
//}
//
//
//int main() {
//	// Test case
//	int arr[] = { 1, 4, 6, 7, 2, 9, 8, 3, 5, 0 };
//	int k = 4;
//	MinHeap heap(4); // ����һ����СΪ4�Ķ� 
//	heap.createMinHeap(arr);
//	for (int i = k; i < 10; i++) {
//		heap.insert(arr[i]);
//	}
//
//	cout << "�����ĸ�Ԫ����" << endl;
//	vector<int> v = heap.getHeap();
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i] << endl;
//	}
//	system("pause");
//	return 0;
//}
