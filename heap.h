#include <bits/stdc++.h>
using namespace std;

#ifndef HEAP_H
#define HEAP_H


template<typename T>
// ############################################# MAX-HEAP ########################################
class maxHeap {
	private:
		vector<T> heap;

		int parent(int index);
		int left(int index);
		int right(int index);

		void heapifyUP(int index);
		void heapifyDOWN(int index);

	public:

		int size();
		bool empty();
		void push(T element);
		void pop();
		void display();

		T top();
};

template<typename T> inline int maxHeap<T>::parent(int index) {
	return (index - 1)/2;
}
template<typename T> inline int maxHeap<T>::left(int index) {
	return 2*index + 1;
}
template<typename T> inline int maxHeap<T>::right(int index) {
	return 2*index + 2;
}
template<typename T> inline int maxHeap<T>::size() {
	return heap.size();
}
template<typename T> inline bool maxHeap<T>::empty() {
	return size() == 0;
}
template<typename T> inline T maxHeap<T>::top() {
	return heap.at(0);
}


template<typename T> inline void maxHeap<T>::heapifyUP(int index) {
	if(index > 0 && heap[parent(index)] < heap[index]) {
		swap(heap[parent(index)], heap[index]);
		heapifyUP(parent(index));
	}
}
template<typename T> inline void maxHeap<T>::heapifyDOWN(int index) {
	int leftNode = left(index);
	int rightNode = right(index);
	int currNode = index;

	if(leftNode < size() && heap[leftNode] > heap[currNode]) {
		currNode = leftNode;
	}
	if(rightNode < size() && heap[rightNode] > heap[currNode]) {
		currNode = rightNode;
	}

	if(currNode != index) {
		swap(heap[currNode], heap[index]);
		heapifyDOWN(currNode);
	}
}


template<typename T> inline void maxHeap<T>::push(T element) {
	heap.push_back(element);
	int index = size() - 1;
	heapifyUP(index);
}
template<typename T> inline void maxHeap<T>::pop() {
	if(!size()) {
		return;
	}
	heap.at(0) = heap.at(size() - 1);
	heap.pop_back();
	heapifyDOWN(0);
}
template<typename T> inline void maxHeap<T>::display() {
	for(auto x: heap) {
		cout << x << ' ';
	}
}


// ############################################# MIN-HEAP #######################################
template<typename T>

class minHeap {
	private:
		vector<T> heap;

		int parent(int index);
		int left(int index);
		int right(int index);

		void heapifyUP(int index);
		void heapifyDOWN(int index);

	public:

		int size();
		bool empty();
		void push(T element);
		void pop();
		void display();

		T top();
};

template<typename T> inline int minHeap<T>::parent(int index) {
	return (index - 1)/2;
}
template<typename T> inline int minHeap<T>::left(int index) {
	return 2*index + 1;
}
template<typename T> inline int minHeap<T>::right(int index) {
	return 2*index + 2;
}
template<typename T> inline int minHeap<T>::size() {
	return heap.size();
}
template<typename T> inline bool minHeap<T>::empty() {
	return size() == 0;
}
template<typename T> inline T minHeap<T>::top() {
	return heap.at(0);
}


template<typename T> inline void minHeap<T>::heapifyUP(int index) {
	if(index > 0 && heap[parent(index)] > heap[index]) {
		swap(heap[parent(index)], heap[index]);
		heapifyUP(parent(index));
	}
}
template<typename T> inline void minHeap<T>::heapifyDOWN(int index) {
	int leftNode = left(index);
	int rightNode = right(index);
	int currNode = index;

	if(leftNode < size() && heap[leftNode] < heap[currNode]) {
		currNode = leftNode;
	}
	if(rightNode < size() && heap[rightNode] < heap[currNode]) {
		currNode = rightNode;
	}

	if(currNode != index) {
		swap(heap[currNode], heap[index]);
		heapifyDOWN(currNode);
	}
}


template<typename T> inline void minHeap<T>::push(T element) {
	heap.push_back(element);
	int index = size() - 1;
	heapifyUP(index);
}
template<typename T> inline void minHeap<T>::pop() {
	if(!size()) {
		return;
	}
	heap.at(0) = heap.at(size() - 1);
	heap.pop_back();
	heapifyDOWN(0);
}
template<typename T> inline void minHeap<T>::display() {
	for(auto x: heap) {
		cout << x << ' ';
	}
}




#endif