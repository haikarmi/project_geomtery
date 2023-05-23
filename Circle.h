//
// Created by חי כרמי on 15/05/2023.
//

#ifndef UNTITLED110_CIRCLE_H
#define UNTITLED110_CIRCLE_H
#include "Shape.h"
#define PI 3.14159265359

class Circle: public virtual Shape {
private:
    float radius;

public:
    Circle(float radius,char *color);
    Circle(){radius=0;}
    float area_calculation(float radius,float rad) ;
    Circle(const Circle & other);
    void print() ;
    char * getName ()const {return "Rectangle";};
    float get_area();


protected:
    float get_radius() const{return radius;}

};


#endif //UNTITLED110_CIRCLE_H
