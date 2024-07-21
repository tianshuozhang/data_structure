#pragma once
#define MaxSize 50
#ifndef SQQUEUE
#define SQQUEUE

template <typename T>
class SqQueue
{
	T data[MaxSize];
	int front, rear;
	void InitQueue();
	bool isEmpty();
	bool EnQueue(T x);
	bool DeQueue(T& x);

};
#endif // !SQQUEUE


