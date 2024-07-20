#pragma once
#define MaxSize 100
#ifndef SEQLIST
#define SEQLIST

template <typename T>

class SeqList
{
	T data[MaxSize];
	int length;
	void InitList();
	bool ListInsert(int i, T e);
	bool ListDelete(int i,T& e);
	int LocateElem(T e);
};
#endif

