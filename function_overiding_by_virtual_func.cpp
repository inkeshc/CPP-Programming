#include <iostream>

using namespace std;


class Base
{
        int x = 5;
        
        public:
        virtual void display()
        {
                cout<<"\n  Base class x = \t"<< x << endl;
        }

};

class Derived : public Base
{
        int y = 10;
        
        public:
        void display()
        {
                cout<<"\n Derived class y = \t"<< y << endl;
        }

};
int main()
{

        Base *b1;
        
        Derived d1;
        
        b1 = &d1;
        
        b1->display();

return 0;
}
