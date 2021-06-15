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
                AddressLine = AddressLine;
                city = city;
                state = state;
        }

};


int main()
{
        Address a1 = Address("Kukkar Lane", "Yeola", "Maharashatra");
        
return 0;
}
