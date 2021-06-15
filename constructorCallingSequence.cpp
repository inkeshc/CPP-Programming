#include <iostream>

using namespace std;


class Person
{

        public:
        Person()
        {
                cout<<"\n 1 Person Constructor Called \n";
        }
        
        ~Person()
        {       
                cout<<"\n 2 Person Destructor Called \n";
        }

};

class Employee : public Person
{
        public:
        Employee()
        {
                cout<<"\n  3 Employee Constructor Called \n";
        }

        ~Employee()
        {
                cout<<"\n  4 Employee Destrcutor Called \n";
        }       
};

int main()
{
        
        Employee E1;
        


return 0;
}







