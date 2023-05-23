//
// Created by חי כרמי on 22/05/2023.
//

#include "MyMain.h"
#include "Circle.h"
#include "LinkedList.h"
#include "Rectangle.h"
#include "Cylinder.h"
#include "Ring.h"
#include "Cuboid.h"


// Function to print the main menu options
void MyMain::print_menu_main() {
    cout << "Please choose one of the following option" << endl;
    cout << "1.	cin new objects in the list" << endl;
    cout << "2.	Prints all the objects in the list" << endl;
    cout << "3 .Search by color." << endl;
    cout << "4. Takes a minimal volume, and prints all the shapes whose volume is larger" << endl;
    cout << "5.	• Prints the shape like name " << endl;
    cout << "6.	• Prints the sum of the areas of all shapes" << endl;
    cout << "7. • Prints the sum of the volumes of all shapes" << endl;
    cout << "8.	• Frees all dynamic memory and ends." << endl;

}

MyMain::MyMain() {

    int choice2 = 0;
    do {
            print_menu_main();
            cin >> choice2;
        switch (choice2) {
            case 1: {
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
                        Circle *circle = new Circle(radius, color);
//                        circle->print();
                        list1.add_shapes(circle);
                        break;


                    }
                    case 2: {
                        float length = 0;
                        float width = 0;
                        char *color = new char[20];
                        cout << "enter length " << endl;
                        cin >> length;
                        cout << "enter width " << endl;
                        cin >> width;
                        cout << "enter color " << endl;
                        cin.ignore(1, '\n');

                        cin.get(color, 20);
                        Rectangle *rectangle = new Rectangle(length, width, color);
//                        rectangle->print();
                        list1.add_shapes(rectangle);
                        break;

                    }
                    case 3: {
                        float radius = 0;
                        float high = 0;
                        char *color = new char[20];
                        cout << "enter radius " << endl;
                        cin >> radius;
                        cout << "enter high " << endl;
                        cin >> high;
                        cout << "enter color " << endl;
                        cin.ignore(1, '\n');

                        cin.get(color, 20);
                        Cylinder *cylinder = new Cylinder(radius, high, color);
//                        cylinder->print();
                        list1.add_shapes(cylinder);
                        break;

                    }
                    case 4: {
                        float radius = 0;
                        float radius1 = 0;
                        char *color = new char[20];
                        cout << "enter radius " << endl;
                        cin >> radius;
                        cout << "enter radius 2 " << endl;
                        cin >> radius1;
                        cout << "enter color " << endl;
                        cin.ignore(1, '\n');

                        cin.get(color, 20);
                        Ring *ring = new Ring(radius, radius1, color);
//                        ring->print();
                        list1.add_shapes(ring);
                        break;

                    }
                    case 5: {
                        float length = 0;
                        float width = 0;
                        float high = 0;
                        char *color = new char[20];
                        cout << "enter length " << endl;
                        cin >> length;
                        cout << "enter width " << endl;
                        cin >> width;
                        cout << "enter high " << endl;
                        cin >> high;
                        cout << "enter color " << endl;
                        cin.ignore(1, '\n');

                        cin.get(color, 20);
                        Cuboid *cuboid = new Cuboid(length, width, high, color);
                        cuboid->print();
                        list1.add_shapes(cuboid);
                        break;

                    }
                    default: {
                        cout << "enter choice with 1-5" << endl;
                        cin >> choice2;
                    }


                }
                break;

            }

            case 2: {
                list1.print_listy();
                break;

            }
            case 3: {
                char *color;
                cout << " enter the color" << endl;
                cin.ignore(1, '\n');
                cin.get(color, 20);
                list1.check_color(color);
                break;

            }
            case 4: {
                float capacity=0;
                cout<<"enter capacity "<<endl;
                cin>>capacity;
                list1.check_capacity(capacity);
                break;

            }
            case 5:{
                char* name;
                cout<<"enter name "<<endl;
                cin.ignore(1, '\n');
                cin.get(name,20);
                list1.print_shape_cin_name(name);
                break;

            }
            case 6:{
                cout<<list1.print_sum_areas()<<endl;
                break;
            }
            case 7:{
                cout<<list1.print_sum_volume()<<endl;
                break;
            }
            default: {
                cout << "enter choice with 1-8" << endl;
                cin >> choice2;
            }
            case 8:{
                cout<<"thank you "<<endl;
                break;

            }

        }
    } while (choice2 !=8);
}
















