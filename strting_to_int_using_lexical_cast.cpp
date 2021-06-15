#include <iostream>
#include <boost/lexical_cast.hpp>

using namespace std;

int main()
{
    string number = "889456";
    
    int i = boost::lexical_cast<int>(number);
    
    cout<<"\n Value of i \t"<< i << endl;

return 0;
}


















































