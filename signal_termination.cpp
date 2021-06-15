#include <iostream>
#include <csignal>

using namespace std;

sig_atomic_t sigValue = 0;

void signalHandler(int sig)
{
        sigValue = sig;
}

int main()
{

        signal(SIGTERM, signalHandler);
        
        cout<<"\n Before Raise Signal Value \t"<< sigValue << endl;
        
        raise(SIGTERM);
        
        cout<<"\n After Raise Signal Value \t"<< sigValue << endl;
        
        signal(SIGSEGV, signalHandler);
        
        cout<<"\n Before SIGSEGV Raise Signal Value \t"<< sigValue << endl;
        
        raise(SIGSEGV);
        
         cout<<"\n After SIGSEGV Raise Signal Value \t"<< sigValue << endl;
         
         signal(SIGFPE, signalHandler);
         
         cout<<"\n Before SIGFPE Raise Signal Value \t"<< sigValue << endl;
         
         raise(SIGFPE);
         
         cout<<"\n After SIGFPE Raise Signal Value \t"<< sigValue << endl;
        
        

return 0;
}
