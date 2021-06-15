#include <iostream>

using namespace std;

class functionObject
{
        public:
        int operator()(int a,int b)
        {
                return a + b;
        }
};



int main()
{

        functionObject f;
        int result = f(5,4);
        cout<<"\n Additiion of Two numbers is \t"<< result << endl;

return 0;
}












