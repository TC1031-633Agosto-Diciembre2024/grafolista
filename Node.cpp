//
// Created by Andrés Torres on 05/11/24.
//
#include <iostream>
#include "Node.h"
#include <string>

using namespace std;
template <typename T>
T Node<T>::getData() {
    return data;
}
template <typename T>
void Node<T>::setData(T data) {
    this->data=data;
}
template <typename T>
Node<T>* Node<T>::getNext() {
    return next;
}

template <typename T>
void Node<T>::setNext(Node* next) {
    this->next=next;
}
template class Node<int>;
template class Node<string>;