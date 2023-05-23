//
// Created by חי כרמי on 15/05/2023.
//

#ifndef UNTITLED110_SHAPE_H
#define UNTITLED110_SHAPE_H


class Shape {
private:
    char *color;

public:
    Shape() ;
    Shape(char * color);

    virtual ~Shape();

    virtual float area_calculation(float length, float width) =0;
    virtual float get_area()=0;


    virtual void print ()  ;
    char *getColor() const;
    virtual char * getName ()const=0;
protected:



};




#endif //UNTITLED110_SHAPE_H
