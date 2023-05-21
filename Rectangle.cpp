//
// Created by חי כרמי on 15/05/2023.
//

#include "Rectangle.h"
#include <iostream>
using namespace std;



Rectangle::Rectangle(float length, float width, char *color):Shape(color) {
    this->length=length;
    this->width=width;


}

void Rectangle::print() {
    cout<< "the length is: "<< this->length<<endl;
    cout<< "the width is: "<<width<<endl;
    cout<<"the color is "<< getColor()<<endl;
    cout<< "the area calculation Rectangle is: "<< area_calculation(length,width)<< endl;
}


Rectangle::Rectangle(const Rectangle &other) {
    this->width=other.width;
    this->length=other.length;
    strcmp( this->getColor(),other.getColor());



}

float Rectangle::area_calculation(float length, float width) {
    this->length=length;
    this->width=width;
    return (this->length* this->width);
}






