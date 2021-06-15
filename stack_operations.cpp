#include <iostream>
#include <stack>

using namespace std;

void newStack(stack<int> ss)
{
        
        stack<int> gg = ss;
        
        while(!gg.empty())
        {
                cout<<" "<< gg.top() <<endl;
                gg.pop();
                
        }
        
        cout<<"\n";
}
int main()
{

        stack<int> newSt;
        
        newSt.push(55);
        newSt.push(44);
        newSt.push(33);
        newSt.push(22);
        newSt.push(11);
        
        newSt.emplace(68524);
        
        newStack(newSt);
        
        cout<<"\n New stack Size \t"<< newSt.size() <<"\n";
        cout<<"\n Top element at the stack \t"<< newSt.top() <<"\n";
        cout<<"\n new Stack pop() call \n";
 
       // newSt.pop();
        
        newStack(newSt);
        
        
        cout<<"\n emplace() functions is used to inserting a new element at top of the stack \n"<<endl;
        
        newSt.emplace(68524);
        
        cout<<"\n pop() function is used to removing top most element top of the stack \n" << endl;
        
        newSt.pop();
        
        cout<<"\n New stack Size \t"<< newSt.size() <<"\n";
        
        cout<<"\n push() function is used to insert new element top of the stack \n" << endl;
        
        newSt.push(6691);
        
        newStack(newSt);
        
        cout<<"\n top() function is used for returning top most element from stack \n" << endl;
          
        cout<<"\n top element from stack \t"<< newSt.top() << endl;
        
        
        
        
        
return 0;
}








