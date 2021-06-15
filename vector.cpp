#include <iostream>
#include <vector>

using namespace std;

// Storing Names in vector dyanmically

int main()
{

        vector<string> names;
        
        names.push_back("Inkesh");
        names.push_back("Oman");
        names.push_back("Rakesh");
        names.push_back("Riya");
        
        cout<<"\n ";       
        
        vector<string>::iterator itr;
        
        for(itr=names.begin(); itr!= names.end(); itr++)
        {
                cout<<""<< *itr << ", ";
        }
   
        cout<<"\n ";        
return 0;
}
