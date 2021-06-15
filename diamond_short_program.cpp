#include <iostream>

using namespace std;

class A
{
        int a;
        public:
        A()
        {
                cout<< "\n Inside Parameter less Constructor of Class A "<< endl;
                a = 10;       
        }
};

class B : virtual public A
{
        int b;
        public:
        B()
        {
                cout<< "\n Inside Parameter less Constructor of Class B "<< endl;
                b = 20;
        }
};

class C : virtual public A
{
        int c;
        public:
        C()
        {
                cout<< "\n Inside Parameter less Constructor of Class C "<< endl;
                c = 30;
        }
};

class D : public B, public C
{

        int d;
        public:
        D()
        {
               cout<< "\n Inside Parameter less Constructor of Class D "<< endl;
               d = 40;
        }
};

int main()
{

        D d1;
        
        cout<<"\n size of class D d1 object "<< sizeof(d1) << endl;
return 0;
}

/* 

---------------------OUTPUT Without Virtual ---------------------------------


 Inside Parameter less Constructor of Class A 

 Inside Parameter less Constructor of Class B 

 Inside Parameter less Constructor of Class A 

 Inside Parameter less Constructor of Class C 

 Inside Parameter less Constructor of Class D 

 size of class D d1 object 20

*/

/* 


---------------------OUTPUT With Virtual ---------------------------------


 Inside Parameter less Constructor of Class A 

 Inside Parameter less Constructor of Class B 

 Inside Parameter less Constructor of Class C 

 Inside Parameter less Constructor of Class D 

 size of class D d1 object 24


*/














