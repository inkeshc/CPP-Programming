#include <iostream>

using namespace std;

// To use to_string method use std=c++11 Version to compile code

int main()
{

        int i = 29;
        float f1 = 98.36;
        
        string str = to_string(i);
        
        string str2 = to_string(f1);
        
        cout<<"\n Value of  i \t"<< str <<endl;
        cout<<"\n Value of f1 \t"<< str2 << endl;


return 0;
}
