#include "SqStack.h"
template <typename T>
void SqStack<T>::InitStack() {
	top = -1;
}
template <typename T>
bool SqStack<T>::StackEmpty() {
	if (top == -1)
		return true;
	return false;
}
template <typename T>
bool SqStack<T>::Push(T x) {
	if (top == MaxSize - 1)
		return false;
	data[++top] = x;
	return true;
}

template <typename T>
bool SqStack<T>::Pop(T &x) {
	if (top == -1)
		return false;
	x = data[top--];
	return true;
}

template <typename T>
bool SqStack<T>::GetTop(T& x) {
	if (top == -1)
		return false;
	x = data[top];
	return true;
}