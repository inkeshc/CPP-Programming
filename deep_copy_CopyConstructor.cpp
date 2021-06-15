#include <iostream>

using namespace std;

// Deep Copy Constructor, in deep copy we write copy constructor syntax to perform copy constructor

class Demo
{
        int a;
        int b;
        int *p;
        
        public:
        Demo()
        {
                p = new int();
        }
        
        Demo(Demo &d) // Copy Constructor syntax
        {
                a = d.a;
                b = d.b;
                *p = *(d.p);
        }
        
        void setData(int x, int y, int z)
        {
                a = x;
                b = y;
                *p = z;
        }
        
        void showData()
        {
                cout<<"\n value of a in Deep Copy \t"<< a << endl;
                cout<<"\n value of b in Deep Copy \t"<< b << endl;
                cout<<"\n value of *p in Deep Copy \t"<< *p << endl;
        }

};

int main()
{
        Demo d1;
        d1.setData(5,9,66);
        Demo d2 = d1;
        d2.showData();

return 0;
}
