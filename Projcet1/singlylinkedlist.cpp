#ifndef SINGLY_LINKED_LIST_CPP
#define SINGLY_LINKED_LIST_CPP
#include <iostream>
using namespace std;
#include "singlyLinkedList.h"
#include "Node.h"

SinglyLinkedList::SinglyLinkedList()
{
	head = NULL;
}

SinglyLinkedList::~SinglyLinkedList()
{
    // garbage collection
    Node* tempNode = head;
    Node* tempNodeC = tempNode;
    while (tempNode != NULL)
    {
        tempNodeC = tempNode;
        delete tempNode;
        tempNode = tempNodeC->next;
    } // while
    head = NULL;
}

void SinglyLinkedList::insert(Node* newNode)
{
    if (head == NULL) // when the singly linked list is empty
    {
        head = newNode;
    }
    else
    {
        // before adding newNoide, head points to the first node
        // of SLL
        newNode->next = head;
        head = newNode;
    }
}

void SinglyLinkedList::display()
{
    Node* tempNode = head;

    std::cout << std::endl;
    while (tempNode != NULL)
    {
        cout << tempNode->display_Value() << " " << std::endl;
        tempNode = tempNode->next;
    }
}

void SinglyLinkedList::displayAddress()
{
    Node* itr{ head };
    std::cout << head << std::endl;

    while (itr != NULL)
    {
        std::cout << itr << " " << itr->value << " " << itr->next << std::endl;
        itr = itr->next;
    }
}

void SinglyLinkedList::insertSomewhere(int pos, Node* newNode)
{
    if (pos == 0) //check if possition is 0
    {
        newNode->next = head; //if 0 put newNode at the begining of the list
        head = newNode;
    }
    else
    {
        Node* itr{ head }; //create an itorator

        for (int i{ 0 }; i < (pos - 1); i++) //loop over the list util the node before
        {                                    //the node specified by pos
            itr = itr->next;
        }

        newNode->next = itr->next; //insert newNode behind itr
        itr->next = newNode;
    }
}

void SinglyLinkedList::swapNode(Node* tNode)
{
    if (head != tNode) //make sure tNode is not the head
    {
        Node* itr{ head }; //crate a itorator

        while (itr->next != tNode) //find the node that points to tNode
        {
            itr = itr->next;
        }

        itr->next = head;  //change the node that points to tNode to point to the first node
        itr = tNode->next; //store the node that tNode points at in itr
        tNode->next = head->next; //change tNode to point to the second node
        head->next = itr; 
        head = tNode; //make the head point to tNode
    }
}


#endif