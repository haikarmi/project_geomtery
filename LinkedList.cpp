//
// Created by חי כרמי on 27/04/2023.
//
//
#include "Shape.h"
#include "LinkedList.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Cuboid.h"
#include "cstring"

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

void LinkedList::add_node(LinkedList::Node *node) {
    Node *curr = head;  // Set current node to head of the linked list
    while (curr->get_next()!= nullptr){
        curr=curr->get_next();
    }
    curr->set_next(node);
    node->set_next(nullptr);


}

void LinkedList::initialize_linked_list_shape_pointers() {
    int size=0;
    cout<<" enter the size of linked list "<<endl;
    cin>>size;
    this->size=size;


}

//LinkedList::Node LinkedList::shape_to_node(Shape *shape) {
//    Node* node= new Node(shape);
//    return *node;
//}
//LinkedList::Node::Node(Shape *other) {
//    this->setValue(other);
//}











