#include <iostream>
#include <csignal>

using namespace std;

sig_atomic_t sig_value = 0;

void handler(int sig)
{
        sig_value = sig;
}


int main()
{

        signal(SIGINT,handler);
        
        cout<<"\n signal Value \t"<< sig_value << endl;
        
        raise(SIGINT);
        
        cout<<"\n signal Value \t"<< sig_value << endl;
        
        
return 0;
}
