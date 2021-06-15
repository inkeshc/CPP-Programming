#include <iostream>

using namespace std;
 
class Animal
{
        public:
        void eat()
        {
                cout<<"\n Eating ...."<<endl;
        }

};

class Dog : public Animal
{
        public:
        void bark()
        {
                cout<<"\n Barking ...."<< endl;
        }

};

class BabyDog : public Dog
{
        public:
        void weep()
        {
                cout<<"\n Weeping ..... "<<endl;
        }

};

int main()
{
        BabyDog bd1;
        bd1.eat();
        bd1.bark();
        bd1.weep();

return 0;
}


