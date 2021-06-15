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

//using namespace First;

int main()
{
        
        First::sayHello();
        Second::sayHello();
        
       // using namespace Second;
       // sayHello();

return 0;
}
