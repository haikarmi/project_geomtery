//
// Created by חי כרמי on 21/05/2023.
//

#ifndef UNTITLED110_CYLINDER_H
#define UNTITLED110_CYLINDER_H
#include "Circle.h"
#include "shape_3D.h"


class Cylinder:public Circle, public shape_3D {

public:
    Cylinder(float radius,  float high ,char * color);
//    float capacity(float radius,  float high ) ;
    void print();
    float capacity(float length, float width, float high);
    float area_calculation(float radius, float rad);
    float get_capacity();
    char * getName ()const {return "Cylinder";};



};


#endif //UNTITLED110_CYLINDER_H
