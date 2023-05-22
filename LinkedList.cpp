//
// Created by חי כרמי on 27/04/2023.
//
//
#include "Shape.h"
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList() {
    head = nullptr;
}



LinkedList::~LinkedList() { // destructor - clean the heap
    Node *temp1;

    // Delete all nodes in the list
    while (size > 0) {
        temp1 = head;
        for (int i = 0; i < size - 1; i++) {
            temp1 = temp1->get_next();
        }
        delete temp1;
        size--;
    }
}



