#include <iostream>

using namespace std;

class Animal
{
        public:
        void eat()
        {
                cout<<"\n Eating ............. \t"<<endl;
        }

};

class Dog : public Animal
{
        public:
        void Bark()
        {
                cout<<"\n Barking ...............\t"<<endl;
        }

};

int main()
{

        Dog d1;
        d1.eat();
        d1.Bark();
        
        

return 0;
}
