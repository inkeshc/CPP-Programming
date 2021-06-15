#include <iostream>
#include <list>

using namespace std;

int main()
{
        
        cout<<"\n ";
        cout<<"\n list insert() :- insert() function is used for inserting a new element just befor the specified position \n";
        list<int> L1 = {1,2,3,4,5,6};
        
        list<int>::iterator itr1 = L1.begin();
        
        L1.insert(itr1, 10000);
        
        for(itr1  = L1.begin(); itr1 != L1.end(); itr1++)
        {
                cout<<" "<< *itr1;
        }
        
        cout<<"\n";
        
        list<string> langs{"C++","C#"};
        
        list<string>::iterator itr2 = langs.begin();
        
        langs.insert(itr2,8,"JAVA");
        
        for(itr2 = langs.begin(); itr2 != langs.end(); itr2++)
        {
                cout<<" "<< *itr2;
        }
        
        cout<<"\n";
        
        list<int> l1 = {1,2,3,4};
        list<int> l2 = {5,6,7,8,9};
        
        list<int>::iterator itr3 = l1.end();
        
        l1.insert(itr3,l2.begin(), l2.end());
        for(itr3 = l1.begin(); itr3 != l1.end(); itr3++)
        {
                cout<<" "<< *itr3;
        }
        
        cout<<"\n";
        
        
        
        
        
        
        
        
        
return 0;
}



















