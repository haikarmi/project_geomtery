//
// Created by חי כרמי on 15/05/2023.
//

#ifndef UNTITLED110_SHAPE_H
#define UNTITLED110_SHAPE_H


class Shape {
private:
    char *color=new char [20];
    float length;
    float width;
public:
    Shape() {};

    virtual ~Shape();

    virtual float area_calculation(float length, float width) ;

    virtual void print ()  = 0;
protected:
    float getLength() const;

    float getWidth() const;

    char *getColor() const;

    char* funchelper() const;

};




#endif //UNTITLED110_SHAPE_H
