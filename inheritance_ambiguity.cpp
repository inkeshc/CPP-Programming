#include <iostream>

using namespace std;

class A
{
        public:
        void display()
        {
                cout<<"\n display from class A \t"<< endl;
        }

};

class B
{
        public:
        void display()
        {
                cout<<"\n display from class B \t"<< endl;
        }
};

class C : public A,public B
{
        public:
        void View()
        {
                A::display();
                B::display();
        }
};

int main()
{
        C c1;
        c1.View();


return 0;
}
