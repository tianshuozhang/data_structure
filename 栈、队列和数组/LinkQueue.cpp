#include "LinkQueue.h"
template <typename T>
void LinkQueue<T>::InitQueue() {
	front =  (LinkNode*)malloc(sizeof(LinkNode));
	rear = front;
	front->next = nullptr;
}

template <typename T>
bool LinkQueue<T>::isEmpty() {
	return front == rear;
}

template <typename T>
void LinkQueue<T>::EnQueue(T x) {
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = nullptr;
	rear->next = s;
	rear = s;

}

template <typename T>
bool LinkQueue<T>::DeQueue(T& x) {
	if (rear == front)
		return false;
	LinkNode* p = front->next;
	x = p->data;
	front->next = p->next;
	if (rear == p)
		rear = front;
	free(p);
	return true;
}