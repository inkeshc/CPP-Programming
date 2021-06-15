#include <iostream>

using namespace std;

class MyFriend
{
        private:
                int a=10;
                int b=20;
        public:
                
                friend void sum(); // Friend function is not memeber of class but it can access private members of class using friend keyword.

};


void sum()
{
        MyFriend f1;
        int result;
        result =  f1.a + f1.b;
        cout<<"\n Addition of Private members is "<< result << endl;

}


int main()
{
        sum();
        
return 0;
}
