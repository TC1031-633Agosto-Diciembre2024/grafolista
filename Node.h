//
// Created by Andrés Torres on 05/11/24.
//

#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {
private:
    T data;
    Node* next;
public:
    Node(T value): data(value),next(nullptr){}
    T getData();
    void setData(T data);
    Node* getNext();
    void setNext(Node* next);

};



#endif //NODE_H
