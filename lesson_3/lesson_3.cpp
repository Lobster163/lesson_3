#include "include/lesson_3.h"


int main()
{
    Figure* f = new Rectangle(2, 3);    
    printArea(f);
    delete f;

    f = new Square(6, 6);
    printArea(f);
    delete f;

    f = new Rhombus(9, 15);
    printArea(f);
    delete f;

    f = new Circle(5.5f);
    printArea(f);
}

