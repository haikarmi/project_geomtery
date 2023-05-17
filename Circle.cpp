//
// Created by חי כרמי on 15/05/2023.
//

#include "Circle.h"
#include <iostream>
using namespace std;



Circle::Circle(float radius) {
    this->radius=radius;
}

float Circle::area_calculation_Circle()  {
   return Shape::area_calculation(radius,radius) * PI;
}

Circle::Circle(const Circle &other) {
    this->radius=other.radius;

}

void Circle::print() {
    cout<< "the radius is: "<<radius<<endl;
    cout<< "the area calculation Circle is: "<< area_calculation_Circle()<< endl;
}



