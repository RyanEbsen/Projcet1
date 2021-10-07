#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;
class Node {
    friend class SinglyLinkedList;
public:
    // constructor
    Node();
    Node(int v);
    ~Node();
    int display_Value();
private:
    int value;
    Node* next;
};
#endif