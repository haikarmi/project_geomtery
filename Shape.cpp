//
// Created by חי כרמי on 15/05/2023.
//

#include "Shape.h"

float Shape::area_calculation(float length, float width) {
    this->length=length;
    this->width=width;
    return (this->length) * (this->width);
}

float Shape::getLength() const {
    return length;
}

float Shape::getWidth() const {
    return width;
}
char *Shape::getColor() const {
    return color;
}

Shape::~Shape() {
delete[]color;
}
