#include "SqQueue.h"
template <typename T>
void SqQueue<T>::InitQueue() {
	rear = 0;
	front = 0;
}

template <typename T>
bool SqQueue<T>::isEmpty() {
	return rear == front;
}

template <typename T>
bool SqQueue<T>::EnQueue(T x) {
	if ((rear + 1) % MaxSize == front)
		return false;
	data[rear] = x;
	rear = (rear + 1) % MaxSize;
	return true;
}

template <typename T>
bool SqQueue<T>::DeQueue(T& x) {
	if (rear == front) 
		return false;
	x = data[rear];
	front = (front + 1) % MaxSize;
	return true;
}