#include <iostream>

using namespace std;

template<class T> 

class A
{       
        T x = 20;
        T y = 68;
        public:
        A(T a, T b)
        {
                x = a;
                y = b;
        }
        
        void add()
        {
                cout<<"\n Addition is \t"<< x + y << endl;
        }

};
int main()
{

        A<int> a1;
        a1.add();

return 0;
}





























