#include <iostream>

using namespace std;

struct Rectangle
{

        int length, breadth;
        
        Rectangle(int h, int w)
        {
                length = h;
                breadth = w;
        }
        
        void areaOfRectangle()
        {
                cout<<"\n Area of Rectangle \t"<< length*breadth <<endl;
        }
        
};
int main()
{

        struct Rectangle rec = Rectangle(4,6);
        rec.areaOfRectangle();
        
        

return 0;
}
