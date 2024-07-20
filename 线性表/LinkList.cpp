#include "LinkList.h"
#include <cstdlib> // for malloc and free

template <typename T>

bool LinkList<T>::InitList() {
	data = (T)malloc(sizeof(T));
	next = NULL;
	return false;
}
template <typename T>

int  LinkList<T>::Length() {
	int len = 0;
	LinkList* p = this;
	while (p->next != NULL) {
		p = p ->next;
		len++;
	}
	return len;
}
template <typename T>
LinkList<T>* LinkList<T>::GetElem(int i) {
	LinkList<T>* p = this;
	int j = 0;
	while (p != NULL && j < i) {
		p = p->next;
		j++;
	}
	return p;
}
template <typename T>
LinkList<T>* LinkList<T>::LocateElem(T e) {
	LinkList<T>* p = next;
	while (p != NULL && p->data != e)
	{
		p = p->next;
	}
	return p;
}
template <typename T>
bool LinkList<T>::ListInsert(int i, T e) {
	LinkList<T>* p = this;
	int j = 0;
	while (p != NULL && j < i - 1) {
		p = p->next;
		j++;
	}
	if (p == NULL) 
		return false;
	LinkList<T>* s = (LinkList<T>*)malloc(sizeof(LinkList<T>));
	s ->data = e;
	s - next = p->next;
	p->next = s;
	return false;

}
template <typename T>
bool LinkList<T>::ListDelete(int i, T& e) {
	LinkList<T>* p = this;
	int j = 0;
	while (p != NULL && j < i - 1) {
		p = p->next;
		j++;
	}
	if (p == NULL || p->next == NULL) 
		return false;
	LinkList<T>* q = p->next;
	e = q->data;
	p->next = q->next;
	free(q);
	return true;
}