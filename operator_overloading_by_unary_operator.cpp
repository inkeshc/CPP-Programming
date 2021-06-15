#include <iostream>

using namespace std;

class Test
{
        
        private:
        int num;
        
        public:
        Test()
        {
                num=8;
        }
        
        void operator++()
        {
                num = num + 2;
        }
        
        
        
        void print()
        {
                cout<<"\n number is \t"<< num << endl;
        }
        

};


int main()
{

        Test tt;
        
        ++tt; // Calling function void operator++
        
        tt.print();
        
return 0;
}
