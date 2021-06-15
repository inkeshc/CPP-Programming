#include <iostream>
#include <fstream>

using namespace std;

int main()
{

        ofstream writeOs("dataWR.txt");
        
        char input[75];
        
        if(writeOs.is_open())
        {
                cout<<"\n Write Data into the File "<< endl;
                cout<<"\n Enter Your Name "<< endl;
                cin.getline(input,100);
                
                writeOs << input << endl;
                
                cout<<"\n Enter Your Age "<< endl;
                cin>> input;
                
                cin.ignore();
                
                writeOs << input << endl;
                
                writeOs.close();
                
        }
        else 
                cout<<"\nFailed To Open File...."<<endl;
                
                
        ifstream readIs("dataWR.txt");
        
        string line;
        
        if(readIs.is_open())
        {
                cout<<"\n Reading Data From File..... "<< endl;
                while(getline(readIs,line))
                {
                        cout<<"\n "<< line << endl;
                }
                readIs.close();
        }
        else
                cout<<"\nFailed To Open File...."<<endl;  
        
        
        
        
        
        
        
        
        
        

return 0;
}
