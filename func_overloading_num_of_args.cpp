#include <iostream>

using namespace std;

// Function Having same name but different number of arguments is called function Overloading.

class calculator
{
        public:
        static int add(int a, int b)
        {
                return a + b;
        }
        
        static int add(int a, int b, int c)
        {
                return a + b + c;
        }
        
        static int add(int a, int b, int c, int d)
        {
                return a + b + c + d;
        }
        
        static int add(int a, int b, int c, int d,int e)
        {
                return a + b + c + d + e;
        }       

};


int main()
{

        calculator c1;
        
        cout<<"\n 2 parameters or number of arguments \t"<< c1.add(10,20) << endl;
        cout<<"\n 3 parameters or number of arguments \t"<< c1.add(10,20,23) << endl;
        cout<<"\n 4 parameters or number of arguments \t"<< c1.add(10,20,23, 40) << endl;
        
        cout<<"\n 5 parameters or number of arguments \t"<< c1.add(10,20,23, 40, 43) << endl;
        
        
        

return 0;
}
