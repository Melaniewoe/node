//
//  main.cpp
//  WoeHW4
//

#include <iostream>
#include <fstream>     //for ifsrteam and ofstream
#include "node.h"   //to include node.h

using namespace std;
using namespace HW4;

int main(){
    node *head = NULL;
    string line;
    ifstream input;
    input.open("input.txt");   //open input.txt
    if(input.is_open())         //when the file is able to be opened
    {
        while(getline(input, line))
        {
            insertAtFront(head, line);
        }
        removeAtFront(head);
        
        if(head != NULL)
        {
            if(head->getNextPtr() == NULL)
            {
                removeAtFront(head);
            }
            else
            {
                node *temp = head;
                while(temp->getNextPtr()->getNextPtr() != NULL)
                {
                    temp = temp->getNextPtr();
                }
                removeAtNode(temp);
            }
        }
        ofstream output;
        output.open("output.txt");   //send result to an output file
        printList(output, head);      // print out the result in the output file
        printList(cout, head);       //print out result in the screen
        output.close();
        input.close();
    }
    else
    {
        cout << "unable to open input.txt" << endl;   //to make sure that file can be read
    }
    
    return 0;
}

