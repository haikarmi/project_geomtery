//
// Created by חי כרמי on 21/05/2023.
//

#ifndef UNTITLED110_LINKEDLIST_H
#define UNTITLED110_LINKEDLIST_H
#include "Shape.h"
#include <iostream>
using namespace std;

class LinkedList {
    private:
        class Node { // Nested class to represent each node in the linked list
        private:
            Shape *value; // Pointer to an object of MyNumber class
            Node *next; // Pointer to the next node in the list
        public:
            // Getter and setter functions for the private members
            Shape *get_value() { return value; }
            Node *get_next() { return next; }
            void set_next(Node *next_node) { next = next_node; }
            void setValue(Shape *value) { Node::value = value; }

            // Destructor to free the memory occupied by the MyNumber object
//            ~Node() { delete value; }

            // Copy constructor
            Node(const Node &other);
            Node(Shape* value= nullptr, Node* next= nullptr) : value(value), next(next) {}

        };////end of node

        Node *head; // Pointer to the first node in the list
        int size = 0; // Size of the linked list
    public:
        // Default constructor
        LinkedList();

        // Copy constructor
        LinkedList(const LinkedList &other);

        // Destructor
        ~ LinkedList();

        // Function to check if an item is present in the linked list
        bool itemExists(int item);
    // Function to copy the contents of another linked list into the current one
   void add_shapes(Shape* Shape_add);
    void initialize_linked_list_shape_pointers();
    void print_menu();
    void creating_linked_list();;
    static Node shape_to_node(Shape* shape);
    int get_size(){return size;}
    void print_listy();
    Node* get_head(){return head;}
    void check_color(char* color);
    void check_capacity(float capacity);
    void print_shape_cin_name(char* name);
    float print_sum_areas();
    float print_sum_volume();




    }; ////end of class LinkedList




#endif //UNTITLED110_LINKEDLIST_H
