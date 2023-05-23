//
// Created by חי כרמי on 15/05/2023.
//

#ifndef UNTITLED110_RECTANGLE_H
#define UNTITLED110_RECTANGLE_H

#include "Shape.h"



class Rectangle : public virtual Shape {
private:
    float length;
    float width;

public:

    Rectangle (){length=0,width=0;}

    Rectangle(float length, float width,char *color);
    void print() ;
    float area_calculation(float length, float width)  ;
    Rectangle(const  Rectangle &other);
    char * getName ()const {return "Rectangle";};
    virtual float get_area()const;

    virtual float get_area();


protected:
    float get_length(){return length;}
    float get_width(){return width;}


};


#endif //UNTITLED110_RECTANGLE_H
