//
// Created by חי כרמי on 21/05/2023.
//

#ifndef UNTITLED110_RING_H
#define UNTITLED110_RING_H
#include "Circle.h"

class Ring: public Circle{
private:
    float radius1;
protected:
    float get_radius1(){return radius1;}
public:
    Ring(float radius,float radius1, char *color);
    float area_calculation(float radius, float radius1) ;
    void print();
    float get_area();


};


#endif //UNTITLED110_RING_H
