#pragma once
#ifndef DOUBLYLINKLIST
#define DOUBLYLINKLIST

template <typename T>
class DoublyLinkList {
public:
    T data;
    DoublyLinkList* prev;
    DoublyLinkList* next;

    bool InitList();
    int Length();
    DoublyLinkList<T>* GetElem(int i);
    DoublyLinkList<T>* LocateElem(T e);
    bool ListInsert(int i, T e);
    bool ListDelete(int i, T& e);
};

#endif

