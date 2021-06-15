#include <iostream>

using namespace std;

class Demo
{
        int a;
        int b;
        int *p;
        
        public:
        Demo()
        {
                p = new int();
        }
        
        void setData(int x, int y, int z)
        {
                a = x;
                b = y;
                *p = z;
        }
        
        void showData()
        {
                cout<<"\n value of a \t"<< a << endl;
                cout<<"\n value of b \t"<< b << endl;
                cout<<"\n value of *p \t"<< *p << endl;
        }
        
};

int main()
{
        Demo d1;
        d1.setData(20,56,98);
        Demo d2 = d1; // Its a shallow copy and shallow copy does not require copy constructor syntax its create exact copy or shallow copy of existing object of same type.
        d2.showData(); 

return 0;
}
