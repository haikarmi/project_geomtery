//
// Created by חי כרמי on 21/05/2023.
//

#include "Cylinder.h"
#include "shape_3D.h"
#include "Circle.h"
#include "Shape.h"
#include <iostream>

using namespace std;

Cylinder::Cylinder(float radius, float high, char *color) : shape_3D(high), Circle(radius, color), Shape(color) {


}

//float Cylinder::capacity(float radius, float high) {
//    return (radius * radius * PI * high);
//}


void Cylinder::print() {
//    cout<< "the radius is: "<<get_radius() <<endl;
//    cout<< "the area calculation Circle is: "<< area_calculation(get_radius(),get_high())<< endl;
    cout << "Cylinder:" << endl;
   cout<<"the color is :"; Shape::print();
    cout << "the area capacity Circle is: " << capacity(get_radius(),get_radius(), get_high()) << endl;
cout<<"The area is: "<< area_calculation(get_radius(),get_radius())<<endl;

//    cout<< "the color is ";  Circle::print() ;
}

float Cylinder::capacity(float length, float width, float high) {
    return (get_radius() * get_radius() * PI * get_high());

}

float Cylinder::area_calculation(float radius, float rad) {
    float temp;
//    2 * PI * radius * ( radius + height )
temp=(radius+get_high())*radius*2*PI;
    return temp;
}

float Cylinder::get_capacity() {
    return capacity(get_radius(),get_radius(),get_high());
}

float Cylinder::get_area() {
    return area_calculation(get_radius(),get_radius());
}

