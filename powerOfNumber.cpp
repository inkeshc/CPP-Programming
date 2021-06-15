#include <iostream>
#include <math.h>
using namespace std;

// Abstraction using headers files
int main()
{

        int choice;
        
          cout<<"\n Enter Choice \t"<< endl;
         
                
        while(true)
        {
                cout<<"\n Calculate power of number Enter 1 \n and for Exit 0 \t"<< endl;
                cin>>choice;
              
                switch(choice)
                {
                
                case 1:
                        int power;
                        int number;
                        cout<<"\n Enter Number \t"<<endl;
                        cin>>number;
        
                        cout<<"\n Enter Power \t"<<endl;
                        cin>>power;
        
                        int result = pow(number,power); // It is Example of Abstraction
        
                        cout<<"\n Result \t"<< result <<"\n";
                break;                
      
                };
        }
        
return 0;
}
