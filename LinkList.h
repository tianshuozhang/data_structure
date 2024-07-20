#pragma once
#ifndef LINKLIST
#define LINKLIST
template <typename T>



class LinkList
{
	T data;
	LinkList* next;
	bool InitList();
	int Length();
	LinkList<T>* GetElem(int i);
	LinkList<T>* LocateElem(T e);
	bool ListInsert(int i, T e);
	bool ListDelete(int i, T& e);
};

#endif