#include <iostream>

using namespace std;

namespace First
{
        void sayHello()
        {
                cout<<"\n Hello in First namespace \t"<< endl;
        }
}

namespace Second
{
        void sayHello()
        {
                cout<<"\n Hello in Second namespace \t"<< endl;
        }
}

int main()
{

        First::sayHello();
        Second::sayHello();
        

return 0;
}
