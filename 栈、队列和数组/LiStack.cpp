#include "LiStack.h"
#include <iostream>

template <typename T>
LiStack<T>::LiStack() {
    top = nullptr;
}

template <typename T>
LiStack<T>::~LiStack() {
    Node* p;
    while (top) {
        p = top;
        top = top->next;
        delete p;
    }
}

template <typename T>
void LiStack<T>::InitStack() {
    top = nullptr;
}

template <typename T>
bool LiStack<T>::StackEmpty() {
    return top == nullptr;
}

template <typename T>
bool LiStack<T>::Push(T x) {
    Node* newNode = new Node(x, top);
    top = newNode;
    return true;
}

template <typename T>
bool LiStack<T>::Pop(T& x) {
    if (top == nullptr)
        return false;
    Node* temp = top;
    x = top->data;
    top = top->next;
    delete temp;
    return true;
}

template <typename T>
bool LiStack<T>::GetTop(T& x) {
    if (top == nullptr)
        return false;
    x = top->data;
    return true;
}
