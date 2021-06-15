#include <iostream>
#include <vector>

using namespace std;

int main()
{
        vector<int> numbers{1,2,3,4,5,6,7,8,9,10};
        
        for(int i=0;i<numbers.size();i++)
        {
                cout<<" "<< numbers.at(i);
                
                if(numbers.at(i) == 3)
                        break;
        }       
        cout<<"\n ";

return 0;
}

