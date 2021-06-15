#include <iostream>

using namespace std;

//template function with multiple arguments

template<class T1, class T2, class T3, class T4> void func(T1 a, T2 b, T3 c, T4 d)
{
        cout<< "\n Value of a \t"<< a << endl;
        cout<< "\n Value of b \t"<< b << endl;
        cout<< "\n Value of c \t"<< c << endl;
        cout<< "\n Value of d \t"<< d << endl;
}



int main()
{
        func (20,20.5f,986.5, 300000);

return 0;
}
