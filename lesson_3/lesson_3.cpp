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
    delete f;

    std::cout <<std::endl << "P2"<<std::endl;

    Car* car = new PassengerCar("taz", "2nogi");      
    delete car;

    car = new Minivan("Gazel", "next");
    delete car;

    std::cout << std::endl << "P3" << std::endl;
    Fraction f1(7, 2);
    Fraction f2(9, 3);
    Fraction fsum = f1 + f2;
    std::cout << "Result (+) = " << fsum.getResult() << " or "<< fsum.get_sResult() << std::endl;
    fsum = f1 - f2;
    std::cout << "Result (-) = " << fsum.getResult() << " or " << fsum.get_sResult() << std::endl;
    fsum = f1 / f2;
    std::cout << "Result (/) = " << fsum.getResult() << " or " << fsum.get_sResult() << std::endl;
    fsum = f1 * f2;
    std::cout << "Result (*) = " << fsum.getResult() << " or " << fsum.get_sResult() << std::endl;
    fsum = -f1;
    std::cout << "Result (u-) = " << fsum.getResult() << " or " << fsum.get_sResult() << std::endl;

    std::cout << "Result (==) = " << (f1 == f2 ? "true" : "false") << std::endl;
    std::cout << "Result (!=) = " << (f1 != f2 ? "true" : "false") << std::endl;
    std::cout << "Result (<) = " << (f1 < f2 ? "true" : "false") << std::endl;
    std::cout << "Result (>) = " << (f1 > f2 ? "true" : "false") << std::endl;
    std::cout << "Result (>=) = " << (f1 >= f2 ? "true" : "false") << std::endl;
    std::cout << "Result (<=) = " << (f1 <= f2 ? "true" : "false") << std::endl;

    Card* card_1 = new Card(ValueCard::_A, Suit::clubs);
    std::cout << "Tuz = " << card_1->GetValue() << std::endl;
    std::cout << "TitleFlip = " << card_1->Flip() << std::endl;
    std::cout << "TitleFlip = " << card_1->Flip() << std::endl;
    std::cout << "TitleFlip = " << card_1->Flip() << std::endl;
    delete card_1;

    card_1 = new Card(ValueCard::_8, Suit::clubs);
    std::cout << "Tuz = " << card_1->GetValue() << std::endl;
    std::cout << "TitleFlip = " << card_1->Flip() << std::endl;
    delete card_1;
    
    return 0;
}

