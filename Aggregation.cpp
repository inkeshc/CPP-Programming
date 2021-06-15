#include <iostream>

using namespace std;

class Address
{
        public:
        string AddressLine;
        string city;
        string state;
        
        Address(string AddressLine, string city, string state)
        {
                this->AddressLine = AddressLine;
                this->city = city;
                this->state = state;
        }

};


class Employee
{
        private:
        Address* address;
        
        public:
        int id;
        string empName;
        
        Employee(int id, string empName, Address* address)
        {
                this->id = id;
                this->empName = empName;
                this->address = address;
        }
        
        void display()
        {
                cout<<"\n Employee Id \t"<< this->id <<endl;
                cout<<"\n Employee Name \t"<< this->empName << endl;
                cout<<"\n Address line \t"<< address->AddressLine << "\t city :- \t"<< address->city <<"\t state :- \t"<< address->state <<endl;
        }
         

};
int main()
{
        Address a1 = Address("Kukkar Lane", "Yeola", "Maharashatra");
        
        Employee e1 = Employee(20, "Inkesh",&a1);
        
        e1.display();
        
return 0;
}
