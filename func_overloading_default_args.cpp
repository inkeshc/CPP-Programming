#include <iostream>

using namespace std;

void function(int i)
{
        cout<<"\n value of i is \t"<< i << endl;
}


void function(int a=10, int b=20)
{
        cout<<"\n value of a is \t"<< a << endl << " Value of b is \t"<< b << endl;
}

int main()
{

        function(20);
        // Giving Ambiguity Error Compiler does not know which function to be called.
        
        

return 0;
}
