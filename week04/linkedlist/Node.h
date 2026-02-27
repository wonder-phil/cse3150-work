#ifndef _NODE_H
#define _NODE_H


struct Node {
    int data;
    Node * next;

    Node() : data{0}, next{nullptr} {}

    Node(int value) : next{nullptr} {
        data = value;
    }
};

#endif
