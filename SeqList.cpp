#include "SeqList.h"
template <typename T>

void SeqList<T>::InitList() {
	length = 0;
}

template <typename T>
bool SeqList<T>::ListInsert(int i, T e) {
	if (i<1 || i >length + 1) 
		return false;
	if (length >= MaxSize) 
		return false;
	for (int j = length; j >= i; j--)
		data[j] = data[j - 1];
	data[i-1] = e;
	length++;
	return false;
}

template <typename T>
bool SeqList<T>::ListDelete(int i,T& e) {
	//删除成功时，将被删除的元素赋给引用变量e
	if (i<1 || i >length + 1)
		return false;
	e = data[i - 1];
	for (int j = i; i < length; j++)
		data[j - 1] = data[j];
	length--;
	return true;
}
template <typename T>
int SeqList<T>::LocateElem(T e) {
	//查找成功返回位置，否则返回0
	for (int i = 0; i < length; i++)
		if (data[i] == e)
			return i + 1;
	return 0;
}