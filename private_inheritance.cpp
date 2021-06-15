#include <iostream>

using namespace std;

class A
{
        public:
        int a = 4;
        int b = 5;
        
         int mul()
         {
                int c = a * b;
                return c;
         }


};

class B : private A
{
        public:
        void display()
        {
                int result = mul();
                cout<<"\n result of Multiplication \t"<< result <<endl;
        }

};

int main()
{

        B b1;
        b1.display();

return 0;
}



