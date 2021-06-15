#include <iostream>

using namespace std;

class Animal
{
        public:
        string color = "Black";

};

class Dog : public Animal
{
        public:
        string color = "Grey";

};

int main()
{

        Animal A1 = Dog();
        
        cout<<"\n \t"<< A1.color <<endl;
        
        

return 0;
}
