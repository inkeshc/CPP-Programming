#include <iostream>
#include <cstring>


using namespace std;


void stringComp()
{
        char key[] = "mango";
        char buffer[50];
        
        do
        {
                cout<<"\n What is My Favourite Fruit \t"<< endl;
                cin>>buffer;
        }while(strcmp(key,buffer) != 0);
        cout<<"\n Answer is Correct!!!!!!!!!!!!!!!!!"<< endl;
}

int main()
{

        stringComp();
        
return 0;
}




















