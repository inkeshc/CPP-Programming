#include <iostream>
#include <csignal>

using namespace std;

        sig_atomic_t signalled=0;
        
        
        void handler(int sig)
        {
                signalled = 1;
        }

int main()
{
        
        
        signal(SIGINT, handler);
        
        raise(SIGINT);
        
        
        if(signalled)
                cout<<"\n signal is Handled \t"<< endl;
        else
                cout<<"\n Signal is not Handled \t"<< endl;
        
        
};

