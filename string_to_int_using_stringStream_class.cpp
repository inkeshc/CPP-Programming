#include <iostream>
#include <sstream>

using namespace std;

int main()
{

        string number = "100";
        
        stringstream ss;
        
        ss<<number;
        
        int i;
        
        ss>>i;
        
        cout<<"\n Value of number \t"<< number << endl;
        cout<<"\n Value of ss \t"<< ss << endl;
        cout<<"\n Value of i \t"<< i << endl;


return 0;
}
















































