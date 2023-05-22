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
    Node *temp1= new Node;
    // Delete all nodes in the list
    while (size > 0) {
        temp1 = head;
        for (int i = 0; i < size - 1; i++) {
            temp1 = temp1->get_next();
        }
        delete temp1;
    }
}

void LinkedList::add_shapes(Shape* Shape_add) {

    Node *new_node = new Node();
    new_node->setValue(Shape_add);
    new_node->set_next(nullptr);
    if (head == nullptr){
        head = new_node;
//        ++size;
    }
    else if (head != nullptr){
        Node* curr = head;
        while (curr->get_next() != nullptr) {
            curr = curr->get_next();
        }
        curr->set_next(new_node);
//        ++size;
    }
//    delete new_node;

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











