#include <iostream>
#include <cstring>

using namespace std;

int main()
{
        
        char key[25], buffer[25];
        cout<<"\n Enter Key Value \t"<< endl;
        cin.getline(key,25);
        
        strcpy(buffer,key);
        
        cout<<"\n string copy in buffer \t"<< buffer << endl;
        
        cout<<"\n string length \t"<< strlen(buffer) << endl;
        

return 0;
}





















