#include <iostream>

#include "linked_list.h"


using namespace std;

/*
ostream & operator<<(ostream & os, const Node & node) {
    os << node.data;
    return os;
}

ostream & operator<<(ostream & os, const LinkedList & linkedList) {
    Node * ptr = linkedList.root;
    while (ptr) {
        cout << "here " << endl;
        os  << *ptr 
            << " ";
        ptr = ptr->next;
    }
    
    return os;
}

*/


int main() {

    LinkedList linked_list;

    for (int i=0; i < 5; i++) {
        linked_list.insert_in_front(i);
    }
    
    cout << linked_list << endl;

    return 0;
}