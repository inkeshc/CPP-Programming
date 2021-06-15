#include <iostream>

using namespace std;

//If you want to take multiple line inputs use getline()

int main()
{
        string name;
        
        cout<<"\n Enter Your Full Name "<< endl;
        getline(cin, name);
        
        cout<<"\n Hello "<< name << endl;
        
        
        // Below code for getline function using Delimeter character
        string designation;
        
        cout<<"\n  Enter Your Designation Profile "<< endl;
        getline(cin,designation,' ');
        
        cout<<"\n Yout Profile is "<< designation  << endl;

return 0;
}
