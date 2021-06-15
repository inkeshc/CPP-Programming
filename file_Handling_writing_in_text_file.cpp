#include <iostream>
#include <fstream> // To Work on files please inlcude fstream headers files

using namespace std;

int main()
{

        ofstream fileStream("data.txt");
       
        if(fileStream.is_open())
        {
                fileStream<< "Welecome to the JAVATPOINT. \n";
                fileStream<< "C++ Toturial. \n";
                fileStream.close();
        }
        else
                cout<<"\n File Opening Failed "<< endl;

return 0;
}















