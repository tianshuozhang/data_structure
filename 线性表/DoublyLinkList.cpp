#include "DoublyLinkList.h"
#include <cstdlib> // for malloc and free

template <typename T>
bool DoublyLinkList<T>::InitList() {
    this->prev = nullptr;
    this->next = nullptr;
    return true;
}

template <typename T>
int DoublyLinkList<T>::Length() {
    int len = 0;
    DoublyLinkList* p = this->next; // start from the first element
    while (p != nullptr) {
        p = p->next;
        len++;
    }
    return len;
}

template <typename T>
DoublyLinkList<T>* DoublyLinkList<T>::GetElem(int i) {
    DoublyLinkList<T>* p = this->next; // start from the first element
    int j = 0;
    while (p != nullptr && j < i) {
        p = p->next;
        j++;
    }
    return p;
}

template <typename T>
DoublyLinkList<T>* DoublyLinkList<T>::LocateElem(T e) {
    DoublyLinkList<T>* p = this->next; // start from the first element
    while (p != nullptr && p->data != e) {
        p = p->next;
    }
    return p;
}

template <typename T>
bool DoublyLinkList<T>::ListInsert(int i, T e) {
    DoublyLinkList<T>* p = this;
    int j = 0;
    while (p->next != nullptr && j < i) {
        p = p->next;
        j++;
    }
    if (j != i) {
        return false;
    }

    DoublyLinkList<T>* s = (DoublyLinkList<T>*)malloc(sizeof(DoublyLinkList<T>));
    s->data = e;
    s->next = p->next;
    s->prev = p;

    if (p->next != nullptr) {
        p->next->prev = s;
    }
    p->next = s;
    return true;
}

template <typename T>
bool DoublyLinkList<T>::ListDelete(int i, T& e) {
    DoublyLinkList<T>* p = this;
    int j = 0;
    while (p->next != nullptr && j < i) {
        p = p->next;
        j++;
    }
    if (j != i || p->next == nullptr) {
        return false;
    }

    DoublyLinkList<T>* q = p->next;
    e = q->data;
    p->next = q->next;
    if (q->next != nullptr) {
        q->next->prev = p;
    }
    free(q);
    return true;
}
