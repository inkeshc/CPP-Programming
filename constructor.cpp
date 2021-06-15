#include <iostream>

using namespace std;


class hello
{

        public:
        hello()
        {
                cout<<"\n Hello using Constructor "<< endl;
        }
        
        void display()
        {
                cout<<"\n Hello World............."<< endl;
        }
};

int main()
{
        hello myObj;


return 0;
}
