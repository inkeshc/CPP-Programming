#include <iostream>

using namespace std;

template<class T, int size>

class array
{
        public:
        T arr[size];
        
        void insert()
        {
                int i = 1;
                
                for(int j = 0; j < size; j++)
                {
                        arr[j] = i;
                        i++;
                }
        
        }
        
        void display()
        {
                for(int j =0;j < size; j++)
                {
                        cout<<" "<< arr[j] << " ";
                }
        }


};


int main()
{
        
        array<int,10> a1;
        a1.insert();
        a1.display();
        
return 0;
}
















































