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

        signal(SIGABRT,handler);
        
        cout<<"\n signal value \t"<< sig_value << endl;
        
        raise(SIGABRT);
        
        cout<<"\n signal Value \t"<< sig_value << endl;


return 0;
}
