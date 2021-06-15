#include <iostream>
#include <queue>

using namespace std;


void queueSS(queue<int> gg)
{
        
       queue<int> kk =gg;
       
       while(!kk.empty())
       {
                cout<<" "<< kk.front() << endl;
                kk.pop();
       }
       
       cout<<"\n";

}
int main()
{
       
       cout<<"\n Insertion in queue done from rear end and deletion done from front end "<< endl;
       queue<int> fquiz;
       
       fquiz.push(10);
       fquiz.push(20);
       fquiz.push(30);
       
       queueSS(fquiz);
       
       cout<<"\n fquiz size \t"<< fquiz.size() << endl;
       cout<<"\n fquiz front() \t"<< fquiz.front() <<endl;
       cout<<"\n fquiz back() \t"<< fquiz.back() << endl;
        
       cout<<"\n fquiz.pop() "<< endl;
       
       fquiz.pop();
       
       queueSS(fquiz);    
       
       cout<<"\n back() function is used to return a last element in the queue and last element is the newest element in the queue \n";
       
       fquiz.back() += fquiz.front();
       
       cout<<"\n  Modified new back() queue  \t" << fquiz.back() << endl;
       
       fquiz.emplace(200);
       
       cout<<"\n fquiz size \t"<< fquiz.size() << endl;
       
       fquiz.pop();
       
       cout<<"\n fquiz size \t"<< fquiz.size() << endl;
      
       cout<<"\n";
       
         std::queue<int> newqueue;  
    std::cout<< "0. size: "<< newqueue.size();  
    for(int j=0; j<5; j++)  
    newqueue.push(j);  
    std::cout<<"\n";  
    std::cout << "1. size: " << newqueue.size();  
    newqueue.pop();  
    std::cout<<"\n"; 
    
     for(int i=0; i<5; i++)  
     {
        cout<<" "<< newqueue.front();
     }
    
     
    std::cout << "2. size: "<< newqueue.size();  
    
    
    
    cout<< "\n priorirty queue inside priority queue, queue with highest priority will be poppe first \n";
    
    priority_queue<int> pQ;
    
    pQ.push(10);
    pQ.push(20);
    pQ.push(30);
    
    cout<<"\n Number of elements present in priority Queue using size() \t"<< pQ.size() << endl;
    
    while(!pQ.empty())
    {
        cout<<"\n using top() is used to return the first element \t"<< pQ.top() << endl;   
        pQ.pop();
    }

    cout<<"\n";
    
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
       
       
        
       
       
       
       
       
       
       
       


return 0;
}
