#include <iostream>

using namespace std;

class Account
{
        public:
        float salary = 60000;
};

class programmer : public Account
{
        public:
        float bonus = 6000;


};


int main()
{

        programmer p1;
        cout<<"\n programmer salary \t"<< p1.salary <<endl;
        
        cout<<"\n programmer Bonus \t"<< p1.bonus <<endl;

return 0;
}
