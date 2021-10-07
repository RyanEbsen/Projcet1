#include <iostream>
#include "singlylinkedlist.h"

int main()
{
    Node* n1{ new Node(100) };
    Node* n2{ new Node(200) };
    Node* n3{ new Node(300) };
    Node* n4{ new Node(400) };
    Node* n5{ new Node(500) };

    SinglyLinkedList* sLL1 = new SinglyLinkedList();

    sLL1->insert(n1);
    sLL1->insert(n2);
    sLL1->insert(n3);
    
    sLL1->display();

    sLL1->insertSomewhere(1, n4);

    sLL1->display();

    sLL1->insert(n5);
    sLL1->display();

    sLL1->swapNode(n5);

    sLL1->display();

    sLL1->displayAddress();


}

