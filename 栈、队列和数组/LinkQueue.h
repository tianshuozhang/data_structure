#pragma once
#ifndef LINKQUEUE
#define LINKQUEUE
template <typename T>

class LinkQueue
{
	struct LinkNode
	{
		T data;
		LinkNode* next;
		LinkNode(T x, Node* n = nullptr) : data(x), next(n) {}
	};
	LinkNode* front, * rear;
};

#endif // !LINKQUEUE
