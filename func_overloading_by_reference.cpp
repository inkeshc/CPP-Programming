#include <iostream>

using namespace std;

void func(int x)
{
        cout<<"\n value of x is  \t"<<  x << endl;
}

void func(int &b)
{
        cout<<"\n value of b is \t"<< b << endl;
}


int main()
{
        int a = 20;
        func(a);



return 0;
}













































