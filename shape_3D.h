//
// Created by חי כרמי on 15/05/2023.
//

#ifndef UNTITLED110_SHAPE_3D_H
#define UNTITLED110_SHAPE_3D_H

#include "Shape.h"

class shape_3D : public Shape {
private:
    float high;

    shape_3D() {};

     float capacity(float length, float width, float high);


};


#endif //UNTITLED110_SHAPE_3D_H
