#include <iostream>
#include "Rectangle.h"

int main() {
//    Circle C1(3);
//    C1.print();
char bla[5];
strcpy(bla,"ger");

    Rectangle R1(2, 83, bla);
    R1.print();
    Rectangle R2 = R1;
    R2.print();


    return 0;
}
