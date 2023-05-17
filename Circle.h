//
// Created by חי כרמי on 15/05/2023.
//

#ifndef UNTITLED110_CIRCLE_H
#define UNTITLED110_CIRCLE_H
#include "Shape.h"
#define PI 3.14159265359

class Circle: public Shape {
private:
    float radius;
public:
    Circle(float radius=0);
    float area_calculation_Circle() ;
    Circle(const Circle & other);
    void print() override;

};


#endif //UNTITLED110_CIRCLE_H
