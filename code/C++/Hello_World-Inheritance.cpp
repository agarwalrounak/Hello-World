/*
    Author : Ayran Olckers
    Date : 16/10/2019
    Time : 08:40
    Description : Hello World with Inheritance
    site: https://ayran.dev
*/

#include <iostream>

//I used: Inheritance and dynamic allocation

class _Hello
{
    public:
        virtual ~_Hello(){std::cout << " World!";}
        void Prnt(){std::cout << "Hello";}

};

class ChildHello: public _Hello
{
    public:
        ~ChildHello(){Prnt();}
};

int main()
{
    ChildHello *Obj;
    Obj = new ChildHello;
    delete Obj;
}
