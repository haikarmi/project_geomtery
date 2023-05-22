//
// Created by חי כרמי on 21/05/2023.
//

#include "Ring.h"
#include <iostream>

using namespace std;

float Ring::area_calculation(float radius, float radius1) {
    float temp;
    radius=get_radius();
   temp= (radius*radius- this->radius1*this->radius1)*PI;
    return temp;
}

Ring::Ring(float radius, float radius1, char *color) : Circle(radius, color),Shape(color) {
    this->radius1=radius1;
}

void Ring::print() {
    cout<<"Ring: "<<endl;
    cout<<"the color is :";
    Shape::print();
    cout<< "the radius 1 is: "<<get_radius()<<endl;
    cout<<"the radius 2 is:"<< get_radius1()<<endl;
    cout<<"The area is: "<< area_calculation(get_radius(),radius1)<<endl;

}
