#include <iostream>

#include "linked_list.h"


using namespace std;



ostream & operator<<(ostream & os, const Node & node) {
    os << node.data;
    return os;
}

ostream & operator<<(ostream & os, const LinkedList & linkedList) {
    Node * ptr = linkedList.root;
    while (ptr) {
        os  << *ptr 
            << " ";
        ptr = ptr->next;
    }
    
    return os;
}
