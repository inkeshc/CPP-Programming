#include <iostream>
#include <exception>

using namespace std;

class MyException : public exception
{
        public:
        const char*what() const throw()
        {
                return "Attempt to divide by zero! \n";
        }
};

int main()
{

        try
        {
                int x,y;
                cout<<"\n Enter Value for x and y \t"<< endl;
                cin>>x>>y;
                
                if(y==0)
                {
                        MyException z;
                        throw z;
                }
                else
                {
                        cout<<"\n  x/y \t"<< x/y << endl;
                }
        
        }
        catch(exception &ex)
        {
                cout<<"\n \t"<< ex.what() << endl;
        }

return 0;
}
