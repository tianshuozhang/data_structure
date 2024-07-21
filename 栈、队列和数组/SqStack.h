#pragma once
#define MaxSize 50
#ifndef SQSTACK
#define SQSTACK

template <typename T>
class SqStack
{
	T data[MaxSize];
	int top;
	void InitStack();
	bool StackEmpty();
	bool Push(T x);
	bool Pop(T &x);
	bool GetTop(T& x);
};

#endif