#include <iostream>

using namespace std;

template<class X>void func(X a)
{
        cout<<"\n value of a \t"<< a << endl;
}

template<class X,class Y>void func(X a,Y b)
{
        cout<<"\n value of a \t"<< a << endl;
        cout<<"\n value of b \t"<< b << endl;
}

int main()
{

        func(69);
        
        func(25,55.55);


return 0;
}





















































