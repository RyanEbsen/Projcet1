#ifndef NODE_CPP
#define NODE_CPP
#include <iostream>
using namespace std;
#include "Node.h"
Node::Node() // constructor
{
    value = 0;
    next = NULL;
}
Node::Node(int v)
{
    value = v;
    next = NULL;
}
Node::~Node()
{
}
int Node::display_Value()
{
    return value;
}
#endif