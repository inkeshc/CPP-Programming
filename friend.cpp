#include <iostream>

using namespace std;

class B;

class A
{
        int x;
        
        public:
        void setData(int i)
        {
             x = i;
        }
        
        friend void min(A,B);
};

class B
{
        int y;
        
        public:
        void setData(int i)
        {
                y = i;
        }
        
        friend void min(A,B);

};

void min(A a, B b)
{
        if (a.x <= b.y)
        {
                cout<<"\n class A \t"<< a.x <<endl;      
        }
        else
        {
                cout<<"\n class B \t"<< b.y <<endl;
        }

}


int main()
{

        A a;
        B b;
        
        
        a.setData(10);
        b.setData(20);
        
        min(a,b);
        
return 0;
}
