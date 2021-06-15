#include <iostream>

using namespace std;

class Address
{       
        public:
        string addressline;
        string city;
        string state;
        
        Address(string addressline, string city, string state)
        {
                this->addressline = addressline;
                this->city = city;
                this->state = state;
        }
};

class Employee
{
        private:
        Address* address;
        
        public:
        int empId;
        string empName;
        
        Employee(int empId, string empName, Address* address)
        {
                this->empId = empId;
                this->empName = empName;
                this->address = address;
        }
        
        void display()
        {
                cout<<"\n Employee Id \t"<< this->empId<< endl;
                cout<<"\n Employee Name \t"<< this->empName << endl;
                cout<<"\n Address line \t"<< address->addressline <<"\t city \t"<< address->city <<"\t state :- \t"<< address->state <<endl;
        }

};

int main()
{
        Address a1 = Address("Kukkar Lane", "Yeola","Maharasthra");
        Employee e1 = Employee(5696, "Inkesh", &a1 );
        
        e1.display();        
        
return 0;
}

