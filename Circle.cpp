//
// Created by חי כרמי on 15/05/2023.
//

#include "Circle.h"
#include <iostream>
using namespace std;



Circle::Circle(float radius, char *color):Shape(color)  {
    this->radius=radius;
}



Circle::Circle(const Circle &other) {
    this->radius=other.radius;
    strcmp( this->getColor(),other.getColor());


}

void Circle::print() {
    cout<<"Circle: "<<endl;
    cout<< "the radius is: "<<radius<<endl;
    cout<< "the area calculation Circle is: "<< area_calculation(radius,radius)<< endl;
    cout<<"the color is: ";  Shape::print() ;

}

float Circle::area_calculation(float radius, float rad) {
    this->radius=radius;
    return (this->radius* this->radius)*PI;
}

float Circle::get_area() {
    return area_calculation(get_radius(),get_radius());
}





