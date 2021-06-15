#include <iostream>

using namespace std;

float division(int x, int y)
{
        if(y==0)
        {
                throw("Attempted to Divide by zero!");
        }
        else
        {
                return (x/y);
        }
}

int main()
{

        int a = 20;
        int b = 0;
        float result = 0;
        
        try
        {
                result = division(a,b);
                cout<<"\n Result is \t"<< result <<  endl;
        }
        catch(const char *e)
        {
                cout<<"\n Inside catch block \t"<< e <<endl;
        }
                
       
return 0;
}















































































