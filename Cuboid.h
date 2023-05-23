//
// Created by חי כרמי on 21/05/2023.
//

#ifndef UNTITLED110_CUBOID_H
#define UNTITLED110_CUBOID_H
#include "Rectangle.h"
#include "shape_3D.h"


class Cuboid: public Rectangle, public shape_3D {
public:
    Cuboid(float length, float width, float high,char *color);
    float capacity(float length, float width, float high) ;
    void print()  ;
    float area_calculation(float length, float width);
    float get_capacity();
    char * getName ()const {return "Cuboid";};




};


#endif //UNTITLED110_CUBOID_H
