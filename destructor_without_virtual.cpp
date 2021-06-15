#include <iostream>

// Destructor using without Virtual Keyword
using namespace std;

class Base
{
        public:
        Base()
        {
                cout<<"\n Base Class Constructor Called.... "<< endl;
        }
        
        ~Base()
        {
                cout<<"\n Base Class Destructor Called.... "<< endl;
        }

};

class Derived : public Base
{
        public:
        Derived()
        {
                cout<<"\n Derived Class Constructor Called.... "<< endl;
        }
        
        ~Derived()
        {
                cout<<"\n Derived Class Destructor Called.... "<< endl;
        }

};


int main()
{

        Base *bptr = new Derived;
        delete bptr;
return 0;
}
