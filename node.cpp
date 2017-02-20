//
//  node.cpp
//  WoeHW4
// node class implementation


#include "node.h"
#include <iostream>
using namespace HW4;

//default constructor
HW4::node::node()
{
   data="";
   nextPtr = NULL;
}

//constructor
HW4::node::node(dataType &newData)
{
    data = newData;
    nextPtr = NULL;
}

//accessor functions
HW4::node::dataType HW4::node::getData()
{
    return data;
}
    
node* HW4::node::getNextPtr()
{
    return nextPtr;
}
    

//mutator function
void HW4::node::setData(node::dataType &newData)
{
    data = newData;
}
    
void HW4::node::setNextPtr(node* &newNextPtr)
{
    nextPtr = newNextPtr;
}

/*Returns value of the length of the list*/
int HW4::listLength(node* headPtr)
{
    int count = 0;
    while(headPtr != NULL)
    {
        headPtr = headPtr -> getNextPtr();
        ++count;
    }
    
    
    return count;
}

/*Inserts a single node at the front of a list*/
void HW4::insertAtFront(node*& headPtr,node::dataType &newData)
{
    node *newcode = new node();
    newcode -> setData(newData);
    newcode -> setNextPtr(headPtr);
    headPtr = newcode;
}

/*Inserts a single node just after the pointer sent in the parameter */
void HW4::insertAfterNode(node* previous_ptr,node::dataType &newData)
{
    node *newnode = new node();
    newnode -> setData(newData);
    node *next = previous_ptr -> getNextPtr();
    newnode -> setNextPtr(next);
    previous_ptr -> setNextPtr(newnode);
}

/*Removes a node at the front of the list */
void HW4::removeAtFront(node*& head_ptr)
{
    head_ptr = head_ptr -> getNextPtr();
}

/*Remove a single node just after the pointer sent in the parameter*/
void HW4::removeAtNode(node* previous_ptr)
{
    if(previous_ptr -> getNextPtr() != NULL)
    {
        node *next = previous_ptr -> getNextPtr() -> getNextPtr();
        previous_ptr -> setNextPtr(next);
    }
}

/*Displays to the stream listed, an entire list from the pointer location to the end of the list*/
void HW4::printList(ostream &stream, node* headPtr)
{
    while(headPtr!= NULL)
    {
        stream << headPtr -> getData();
        if (headPtr -> getNextPtr() == NULL)
        {
            stream << endl;
        }
        else
        {
           stream << " -> ";
        }
        headPtr = headPtr -> getNextPtr();
    }
}






