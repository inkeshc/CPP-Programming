#include <iostream>
#include <boost/lexical_cast.hpp>

using namespace std;

int main()
{

        int i = 99999;
        
        string str = boost::lexical_cast<string>(i);
        
        cout<<"\n Value of i using lexicast string \t"<< str << endl;

return 0;
}















































