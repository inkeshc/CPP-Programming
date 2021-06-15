
// Copy constructor is a process of creating a new object from existing object of same class type

#include <iostream>

using namespace std;

class inks
{
        public:
        int x;
        
        inks(int a) // Parameterized Constructor
        {
                x = a;
        }
        
        inks(inks &lk) // Copy Constructor
        {
                x = lk.x;
        }
        
};
int main()
{

        inks p1(20);
        
        inks p2 = p1;
        
        cout<<"\n  p2 Value \t"<< p2.x << endl;
return 0;
}

