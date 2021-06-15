#include <iostream>

using namespace std;

// Function having same name but different type of argument is called Function Overloading.

int mul(int a, int b)
{
        return a * b;
}

float mul(double x, int y)
{
        return  x * y;
}


void fun(int i)
{
        cout<<"\n Value of i \t"<< i << endl;
}


void fun(float j)
{
        cout<<"\n value of j \t"<< j << endl;
}


int main()
{

        int result1 = mul(20,90);
        float result2 = mul(5.6,6);
        
        cout<<"\n 2 Different types (int, int) arguments Result 1 \t"<< result1 << endl;
        
        cout<<"\n 2 Different types (double, int) arguments Result 2 \t"<< result2 << endl;
        
        fun(90);
        fun(10.5f);

return 0;
}
