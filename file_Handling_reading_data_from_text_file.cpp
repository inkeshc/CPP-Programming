#include <iostream>
#include <fstream>

// Reading Data from text file 

using namespace std;

int main()
{

      string srg;
      ifstream readDataFile("data.txt");
      
      if(readDataFile.is_open())
      {
               while(getline(readDataFile, srg))
               {
                        cout<<" "<< srg << endl;
               }
               
               readDataFile.close();
      }
      else
                cout<<"\n Failed to Open file "<< endl;


return 0;
}





































































