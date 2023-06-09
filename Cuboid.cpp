//
// Created by חי כרמי on 21/05/2023.
//

#include "Cuboid.h"
#include <iostream>
using namespace std;

Cuboid::Cuboid(float length, float width, float high, char *color): shape_3D(high),Rectangle(length,width,color),Shape(color) {

}

float Cuboid::capacity(float length, float width, float high) {
    return (length*width*high);
}

void Cuboid::print() {
    cout<<"Cuboid: "<<endl;
    cout<<"the color is :";
    Shape::print();
    cout<< "the length is: "<< get_length()<<endl;
    cout<< "the width is: "<<get_width()<<endl;
    cout<<"the high is:"<< get_high()<<endl;
    cout << "the area capacity Circle is: " << capacity(get_length(), get_width(),get_high()) << endl;
    cout<<"The area is: "<< area_calculation(get_length(),get_width())<<endl;

//

}

float Cuboid::area_calculation(float length, float width) {
    float temp;
  temp=  2*(length*width+ length*get_high()+ get_high()*width);
    return temp;
}

float Cuboid::get_capacity() {
    return capacity(get_length(),get_width(),get_high());
}

float Cuboid::get_area() {
    return area_calculation(get_width(),get_width());
}

