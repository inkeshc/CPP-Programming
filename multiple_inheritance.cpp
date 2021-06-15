#include <iostream>

using namespace std;

class A
{
        protected:
        int a;
        
        public:
        void get_a(int n)
        {
                a = n;
        }


};

class B
{
        protected:
        int b;
        
        public:
        void get_b(int n)
        {
                b = n;        
        }

};

// Multiple Inheritance

class C : public A, public B
{
        public:
        void display()
        {
                cout<<"\n Value from class A \t"<< a << endl;
                cout<<"\n Value from class B \t"<< b << endl;
                cout<<"\n Addition of A and B in Class C \t"<< a+b << endl;
        }

};

int main()
{

 C c1;
 c1.get_a(20);
 c1.get_b(20);
 
 c1.display();
 
 
return 0;
}








