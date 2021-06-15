#include <iostream>
#include <csignal>

using namespace std;

namespace
{
        volatile sig_atomic_t signal_status;
}


void signalHandler(int signal)
{
        signal_status = signal;
}

int main()
{

        cout<<"\n Signal Stattus \t"<< signal_status << endl;

        signal(SIGINT, signalHandler);
        
        cout<<"\n Signal Stattus \t"<< signal_status << endl;
        
        cout<<"\n Signal Interrupt \t"<< SIGINT << endl;
        
        raise(SIGINT);
        
        cout<<"\n Signal Stattus \t"<< signal_status << endl;
        
        

return 0;
}





















































