#include <iostream>

using namespace std;

// method/Function Overriding

class Animal
{

        public:
        void eat()
        {
                cout<<"\n Eating";
        }

};

class Dog : public Animal
{
        public:
        void eat()
        {
                cout<<"\n Eating Bread "<< endl;
        }

};

int main()
{

        Dog d = Dog();
        d.eat();

return 0;
}








































