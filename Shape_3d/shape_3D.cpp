//
// Created by חי כרמי on 15/05/2023.
//

#include "shape_3D.h"

float shape_3D::capacity(float length, float width, float high) {
   length= Shape::getLength();
    width= Shape:: getWidth();
    this->high=high;
    return (high*width*length);


}
