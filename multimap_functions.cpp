#include <iostream>
#include <map>

using namespace std;

int main()
{
        
        multimap<string,string> m = {
        {"India", "New Delhi"},
        {"India", "Pune"},
        {"United Kingdom", "London"},
        {"United States", "washington DC"}
        };
        
        cout<<"\n Size of multimap \t"<< m.size() << endl;
        
        cout<<"\n Elements in multimap \n";
        
        for(multimap<string,string>::iterator itr = m.begin(); itr != m.end(); itr++)
        {
                cout<< " [ "<< (*itr).first << " "<< (*itr).second <<" ]" << endl;
        }
        
        cout<<"\n ";
        
return 0;
}








































