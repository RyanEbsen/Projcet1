#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H
#include <iostream>
using namespace std;
#include "Node.h"
class SinglyLinkedList {
public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    void insert(Node* newNode);
    void display();
    void displayAddress();
    void insertSomewhere(int position, Node* newNode);
    void swapNode(Node* tNode);
private:
    Node* head;
};
#endif