#include <iostream>

using namespace std;

class A
{
        int x;
        
        public:
        
        A(int i)
        {
           x=i;
        }
        
        void operator+(A);
        
};

void A::operator+(A a)
{
        int m = x + a.x;
        cout<<"\n The result of Addition of two objects \t"<< m << endl;
}

int main()
{

        A a1(10);
        A a2(20);
        
        a1 + a2;


return 0;
}
