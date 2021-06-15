#include <iostream>

//Abrastraction using classes
using namespace std;

class Calci
{

        private:
        int x,y,z;
        
        public:
        void sum()
        {
               cout<<"\n Enter Two numbers \t"<< endl;
               cin>> x >> y;
               
               z = x + y;
               
               cout<<"\n Result is \t"<< z << endl;
        }


};

int main()
{

        Calci c1;
        c1.sum();
        
        
return 0;
}
