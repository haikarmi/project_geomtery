//
// Created by חי כרמי on 22/05/2023.
//

#include "MyMain.h"
#include "Circle.h"
#include "LinkedList.h"


// Function to print the main menu options
void MyMain::print_menu_main() {
    cout << "Please choose one of the following option" << endl;
    cout << "1.shape perception" << endl;
    cout << "2.	Prints all the objects in the list" << endl;
    cout << "3. Takes a minimal volume, and prints all the shapes whose volume is larger" << endl;
    cout << "4.	Receives a certain type of shapes, and prints all the shapes in the array of this type." << endl;
    cout << "5.	• Prints the sum of the areas of all shapes" << endl;
    cout << "6. • Prints the sum of the volumes of all shapes" << endl;
    cout << "7.	• Frees all dynamic memory and ends." << endl;

}

MyMain::MyMain() {
    list1.initialize_linked_list_shape_pointers();
    int choice = 0;
    do {
        cout << "Write down the number of the shape you want\n"
                "1.Circle\n"
                "2.Rectangle\n"
                "3. Cylinder\n"
                "4.Ring\n"
                "5. Cuboid\n";
        cin >> choice;
    } while (choice > 6);

    switch (choice) {
        case 1: {
            float radius = 0;
            char *color = new char[20];
            cout << "enter radius " << endl;
            cin >> radius;
            cout << "enter color " << endl;
            cin.ignore(1, '\n');

            cin.get(color, 20);
            Circle *c = new Circle(radius, color);
            c->print();
//            list1.add_node(LinkedList::shape_to_node(c))






        }

    }
}






