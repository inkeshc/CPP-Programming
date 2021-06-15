#include <iostream>

using namespace std;

template<class T1, class T2, class T3>

class A
{
        T1 a;
        T2 b;
        T3 c;
        
        public:
        A(T1 x, T2 y, T3 z)
        {
                a = x;
                b = y;
                c = z;
        }
        
        void display()
        {
                cout<<"\n values \t"<< a << "\n" <<b << "\n" << c << endl;
        }

};

int main()
{

        A<int,float,char> a1(58,59.4f,'I');
        
        a1.display();
        
return 0;
}

