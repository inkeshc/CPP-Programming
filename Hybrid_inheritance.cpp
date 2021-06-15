#include <iostream>

using namespace std;

class A
{
        protected:
        int a;
        
        public:
        void get_a()
        {
                cout<<"\n Enter Value of A"<<endl;
                cin>>a;
        }
};

class B : public A
{
        protected:
        int b;
        
        public:
        void get_b()
        {
                cout<<"\n Enter Value of B"<< endl;
                cin>>b;
        }

};

class C
{
        protected:
        int c;
        
        public:
        void get_c()
        {
                cout<<"\n Enter Value of C"<<endl;
                cin>>c;
        }
        
};

class D : public B, public C
{

        protected:
        int d;
        
        public:
        void mul()
        {
                get_a();
                get_b();
                get_c();
                d = a*b*c;
               cout<<"\n Multiplication is \t"<< d <<endl;
        }
        
};

int main()
{

       D d1;
       d1.mul();
       
return 0;
}
