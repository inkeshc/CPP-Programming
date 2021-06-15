#include <iostream>

using namespace std;

void func(double a)
{
        cout<<"\n value of a \t"<< a << endl;
}


void func(int b)
{
        if(b%2==0)
        {
                cout<<"\n Number is Even\t"<< endl;
        }
        else
        {
                cout<<"\n Number is Odd \t"<< endl;
        }

}

int main()
{

        func(63.45);
        func(10);

return 0;
}























































