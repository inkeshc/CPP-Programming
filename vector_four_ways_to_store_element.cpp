#include <iostream>
#include <vector>

using namespace std;

int main()
{

        cout <<"\n 1st way By using push_back() function \n"<< endl;
        
        vector<string> surNames;
        
        surNames.push_back("Bhalla");
        surNames.push_back("Choudhari");
        
        for(int i=0;i<surNames.size();i++)
        {
                cout<<", "<< surNames.operator[](i);
        }
        
        cout<<"\n";
        
        cout <<"\n Inserting elements in vector using overloaded constructor of vector \n"<< endl;
       
        int elements = 12;
        
        vector<int> v1(elements, 8); // vector class  Constructor overloaded here
        
        int *ptr = v1.data();
        
        for(auto i =0;i<v1.size();i++)
        {
                cout<<" "<< *ptr++ << "";
        }
        
        cout<<"\n";
        
         cout <<"\n Inserting elements in vector using inititallinzing array inside vector \n"<< endl;
         
         vector<int> values{10,20,30,40,50,60,70,80,90,10};
         
         vector<int>::reverse_iterator ritr10;
         
         for(ritr10=values.rbegin(); ritr10 != values.rend(); ritr10++)
         {
                cout<<"  "<< *ritr10; 
         }
         
         
         cout<<"\n";
        
         cout <<"\n Inserting elements in vector using storing old vector values in new vector using begin() & end() fuction \n"<< endl;
         
         vector<float> floatValues{10.2,11.5,96.87,66.58};
         
         vector<float> f2(floatValues.begin(),floatValues.end());
         
         for(int i = 0; i < f2.size(); i++)
                cout<<" "<< f2.operator[](i);
                
                
         cout<<"\n"; 
         

return 0;
}
































































