#include <iostream>

using namespace std;

template<class T> T add(T &a, T &b)
{
        T result = a + b;
        return result;
}

int main()
{

        int i = 10;
        int j = 20;
        float a = 4.6;
        float b = 9.5;
        
        long x = 1000000;
        long y = 2000000;
        
        char ch1 = 'A';
        
        char ch2 = 'B';
        
        cout<<"\n Addition of i and j (int) \t"<< add(i,j) << endl;
        cout<<"\n Additon of a and b (float) \t" << add(a,b) << endl;
        
        cout<<"\n Addition of x and y (long) \t"<< add(x,y) << endl;
        
         cout<<"\n Addition of ch1 and ch2 (char) \t"<< add(ch1,ch2) << endl;
         cout<<"\n Addition of ch1 and ch2 (char) \t"<< ch1 << endl;
         

return 0;
}






















































