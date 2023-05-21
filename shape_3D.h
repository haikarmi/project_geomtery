//
// Created by חי כרמי on 15/05/2023.
//

#ifndef UNTITLED110_SHAPE_3D_H
#define UNTITLED110_SHAPE_3D_H

#include "Shape.h"

class shape_3D : public virtual Shape {
private:
    float high{};
public:
    shape_3D(float high);
    virtual float capacity(float length, float width, float high)=0;
protected:
    float get_high()const;


};


#endif //UNTITLED110_SHAPE_3D_H
