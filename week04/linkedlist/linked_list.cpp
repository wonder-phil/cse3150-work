#include <iostream>

#include "linked_list.h"


using namespace std;


LinkedList::LinkedList() : root{nullptr} { }

LinkedList::~LinkedList() { 
    Node * ptr = root;
    while(ptr) {
        ptr = root->next;
       // delete 
    }

}