//
// Created by חי כרמי on 15/05/2023.
//

#include "Shape.h"
#include "cstring"
#include <iostream>
using namespace std;



Shape::~Shape() {//TODO:check
delete[]color;
}

Shape::Shape() {
    const char * temp= "no color";
    this->color=new char [strlen(temp)+1];
    strcpy(this->color,color);
}

Shape::Shape(char *color) {
    this->color=new char [strlen(color)];
    strcpy(this->color,color);
}

char *Shape::getColor() const {
    return color;
}

void Shape::print() {
    cout<< color <<endl;
}
