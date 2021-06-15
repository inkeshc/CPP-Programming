#include <iostream>
#include <cstring>

using namespace std;

int main()
{

        char key[25], buffer[25];
        
        cout<<"\n Enter Key Value \t"<< endl;
        cin.getline(key,25);
        
        cout<<"\n Enter buffer Value \t"<< endl;
        cin.getline(buffer,25);
        
        strcat(key,buffer);
        
        cout<<"\n Key \t"<< key <<endl;
        
        cout<<"\n buffer \t"<< buffer << endl;
return 0;
}
