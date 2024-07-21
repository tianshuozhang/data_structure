#pragma once
#ifndef LISTACK
#define LISTACK

template <typename T>
class LiStack {
private:
    struct Node {
        T data;
        Node* next;
        Node(T x, Node* n = nullptr) : data(x), next(n) {}
    };
    Node* top;

public:
    LiStack();
    ~LiStack();
    void InitStack();
    bool StackEmpty();
    bool Push(T x);
    bool Pop(T& x);
    bool GetTop(T& x);
};

#endif
