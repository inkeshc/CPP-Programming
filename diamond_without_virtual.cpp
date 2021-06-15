#include <iostream>

using namespace std;

class A
{

        private:
                int a;
        public:
                A()
                {
                        cout<< "\n Inside Parameter less Constructor of Class A "<< endl;
                        this->a=10;
                }
                
                A(int a)
                {
                        cout<<"\n Inside Parameterize constructor of class A"<< endl;
                        this->a = a;
                }
                
                
                void print_A_data()
                {
                        cout<<"\n Inside Class A "<< endl;
                        cout<<"\n a = "<< this->a << " ["<< &this->a <<"] "<< endl;
                }
                
                ~A()
                {
                        cout<<"\n Inside Destructor of Class A "<< endl;
                        this->a = 0;
                }
        
};

class B : public A
{
        private:
                int b;
        public:
                B()
                {
                        cout<<"\n Inside Parameter less Constructor of Class B "<< endl;
                        this->b = 20;
                }
                
                B(int a,int b):A(a)
                {
                        cout<<"\n Inside Parameterize Constructor of class A "<< endl;
                        this->b = b;
                        
                }
                
                void print_B_data()
                {
                        A::print_A_data();
                        cout<<"\n Inside Class B "<< endl;
                        cout<<"\n b = "<< this->b <<" ["<< &this->b <<"] "<< endl;
                }
                
                ~B()
                {
                        cout<<"\n Inside Destructor of Class B "<< endl;
                        this->b=0;
                }
};


class C : public A
{

        private:
                int c;
        public:
                C()
                {
                        cout<<"\n Inside Parameter less constructor of Class C "<< endl;
                        this->c = 30;
                }
                
                C(int a, int c):A(a)
                {
                        cout<<"\n Inside Parameterize constructor of Class C "<< endl;
                        this->c= c;
                }
                
                
                void print_C_data()
                {
                        cout<<"\n Inside Class C"<< endl;
                        cout<<"\n c = "<< this->c << " ["<< &this->c <<"] "<< endl;
                }
                
                ~C()
                {
                        cout<<"\n Inside Destructor of Class C "<< endl;
                        this->c = 0;
                }
                
};

class D : public B, public C
{
        private:
                int d;
        public:
                D()
                {
                        cout<<"\n Inside Parameter less Constructor of Class D "<< endl;
                        this->d = 40;
                }
                
                D(int a, int b, int c, int d):A(a),B(a,b),C(a,c)
                {       
                        cout<<"\n Inside Parameterize constructor of class D "<< endl;
                        this->d= d;
                }
                
                void print_D_data()
                {
                        cout<<"\n Inside Class D"<< endl;
                        
                        A::print_A_data();
                        B::print_B_data();
                        C::print_C_data();
                        
                        cout<<"\n d = "<< this->d << " ["<< &this->d << "] "<< endl;
                }
                
                ~D()
                {
                        cout<<"\n Inside Destructor of Class D "<< endl;
                        this->d = 0;
                }
                
                
};

int main()
{

        D obj1;
        
        cout<< " Object 1 of class D  : ";
        
        obj1.print_D_data();
        
        cout<<"\n Size of Object 1  "<< sizeof(obj1) << endl;

return 0;
}








