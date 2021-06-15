#include <iostream>

using namespace std;

struct Rectangle 
{
        int width, height;
};

int main()
{

        struct Rectangle r1;
        r1.width = 8;
        r1.height = 5;
        
        cout<<"\n Total Rectangle side is \t"<< r1.width * r1.height <<"\n";
        

return 0;
}
