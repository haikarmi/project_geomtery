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
#include "Cylinder.h"

using namespace std;

LinkedList::LinkedList() {
    head = nullptr;
}



LinkedList::~LinkedList() { // destructor - clean the heap
    Node *temp1=head;
    // Delete all nodes in the list
        while (temp1!= nullptr) {
            Node* next=temp1->get_next();
            delete temp1->get_value();
            temp1=next;
        }
    }


void LinkedList::add_shapes(Shape* Shape_add) {

    Node *new_node = new Node();
    new_node->setValue(Shape_add);
    new_node->set_next(nullptr);
    if (head == nullptr){
        head = new_node;
        ++size;
    }
    else if (head != nullptr){
        Node* curr = head;
        while (curr->get_next() != nullptr) {
            curr = curr->get_next();
        }
        curr->set_next(new_node);
        ++size;
    }
//    delete new_node;

}

void LinkedList::initialize_linked_list_shape_pointers() {
    int size=0;
    cout<<" enter the size of linked list "<<endl;
    cin>>size;
    this->size=size;


}

void LinkedList::print_listy() {
    Node *temp = head;
    if(size==0){
        cout<<"the list empty"<<endl;
        return;
    }

    // Loop through each node in the list
    for (int i = 0; i < size; ++i) {
        // Print the decimal value of the MyNumber object stored in the current node
        temp->get_value()->print();
        // Check if we've reached the end of the list (i.e. next node is null)
        if (temp->get_next() == nullptr) {
            // If so, print "nullptr" and return
            cout << "the next is nullptr" << endl;
            return;
        }
        // Move to the next node in the list
        temp = temp->get_next();
    }
}

void LinkedList::check_color(char *color) {
    Node *temp=head;
    for (int i = 0; i < size; ++i) {
        if (strcmp(temp->get_value()->getColor(),color)==0){
            temp->get_value()->print();
            temp=temp->get_next();

        } else
            temp=temp->get_next();
    }

}

void LinkedList::check_capacity(float capacity) {
    if (head == nullptr) {
        return;
    } else {
        Node *curr = head;
        Shape *shape = curr->get_value();
        while (curr != nullptr) {
            Shape *shape = curr->get_value();
            if (dynamic_cast<Cylinder *> (shape) != nullptr) {
                Cylinder *cylinder = dynamic_cast<Cylinder *> (shape);
                if (cylinder->get_capacity() > capacity) {
                    cylinder->print();


                }
                curr=curr->get_next();

            }
        }
//                if (dynamic_cast<Cuboid*> (shape) != nullptr) {
//                    Cuboid *cuboid = dynamic_cast<Cuboid *> (shape);
//                    if (cuboid-> > capacity) {
//                        cuboid->print();
//                    }
//                }
//                curr = curr->get_next();
//                if (curr != nullptr) {
//                    shape = curr->get_value();
//                }
//
//            }
        }
    }
//}

//LinkedList::Node LinkedList::shape_to_node(Shape *shape) {
//    Node* node= new Node(shape);
//    return *node;
//}
//LinkedList::Node::Node(Shape *other) {
//    this->setValue(other);
//}











