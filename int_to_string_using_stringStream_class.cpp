#include <iostream>
#include <sstream>

// To Convert int into string using stringStream class

using namespace std;

int main()
{

        int k;
        cout<<"\n Enter Any Number "<< endl;
        cin>>k;
        
        stringstream ss;
        
        ss<<k;
        
        string s;
        
        ss>>s;
        
        cout<<"\n Value of k \t"<< k << endl;
        cout<<"\n Value of ss \t"<< ss << endl;
        cout<<"\n Value of s \t"<< s << endl;

return 0;
}












































