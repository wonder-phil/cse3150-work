#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

#include <iostream>

#include "Node.h"

using namespace std;



class LinkedList {

    public:
        Node * root;

        LinkedList();
        ~LinkedList();

        void insert_in_front(int value) {
            Node * new_node = new Node(value);
            new_node->next = root;
            root = new_node;
        }

};

ostream & operator<<(ostream & os, const Node & node);
ostream & operator<<(ostream & os, const LinkedList & linkedList);


#endif