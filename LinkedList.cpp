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
    Node *temp1 = head;
    // Delete all nodes in the list
    while (temp1 != nullptr) {
        Node *next = temp1->get_next();
        delete temp1->get_value();
        temp1 = next;
    }
}


void LinkedList::add_shapes(Shape *Shape_add) {

    Node *new_node = new Node();
    new_node->setValue(Shape_add);
    new_node->set_next(nullptr);
    if (head == nullptr) {
        head = new_node;
        ++size;
    } else if (head != nullptr) {
        Node *curr = head;
        while (curr->get_next() != nullptr) {
            curr = curr->get_next();
        }
        curr->set_next(new_node);
        ++size;
    }
//    delete new_node;

}

void LinkedList::initialize_linked_list_shape_pointers() {
    int size = 0;
    cout << " enter the size of linked list " << endl;
    cin >> size;
    this->size = size;


}

void LinkedList::print_listy() {
    Node *temp = head;
    if (size == 0) {
        cout << "the list empty" << endl;
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
    Node *temp = head;
    for (int i = 0; i < size; ++i) {
        if (strcmp(temp->get_value()->getColor(), color) == 0) {
            temp->get_value()->print();
            temp = temp->get_next();

        } else
            temp = temp->get_next();
    }

}

void LinkedList::check_capacity(float capacity) {
    if (head == nullptr) {
        return;
    } else {
        Node *curr = head;
        Shape *shape = curr->get_value();
        while (curr != nullptr) {
            if (dynamic_cast<Cylinder *> (shape) != nullptr) {
                Cylinder *cylinder = dynamic_cast<Cylinder *> (shape);
                if (cylinder->get_capacity() > capacity) {
                    cylinder->print();
                }
            }
            if (dynamic_cast<Cuboid *> (shape) != nullptr) {
                Cuboid *cuboid = dynamic_cast<Cuboid *> (shape);
                if (cuboid->get_capacity() > capacity) {
                    cuboid->print();
                }
            }
            curr = curr->get_next();
        }
    }
}

void LinkedList::print_shape_cin_name(char *name) {
    Node *curr = head;
    if (head == nullptr) {
        return;
    } else {
        for (int i = 0; i < size; ++i) {
            if (strcmp(curr->get_value()->getName(), name) == 0) {
                curr->get_value()->print();
            }
            curr = curr->get_next();

        }
    }
}

float LinkedList::print_sum_areas() {
    float sum = 0;
    Node *curr = head;
    if (head == nullptr) {
        cout << " the list empty" << endl;
        return 0;
    } else {
        for (int i = 0; i < size; ++i) {
            sum += curr->get_value()->get_area();
            curr = curr->get_next();
        }
        return sum;


    }
}

float LinkedList::print_sum_volume() {
    float sum = 0;
    if (head == nullptr) {
        return 0;
    } else {
        Node *curr = head;
        Shape *shape = curr->get_value();
        while (curr != nullptr) {
            if (dynamic_cast<Cylinder *> (shape) != nullptr) {//TODO למה לא נכנס
                Cylinder *cylinder = dynamic_cast<Cylinder *> (shape);
                sum += cylinder->get_capacity();
            }

            if (dynamic_cast<Cuboid *> (shape) != nullptr) {
                Cuboid *cuboid = dynamic_cast<Cuboid *> (shape);
                sum += cuboid->get_capacity();
            }
            curr = curr->get_next();
        }
    }
    return sum;
}















