#include <iostream>
#include <vector>

using namespace std;

int main()
{

        vector<string> fruits{"Grapes","Mango","Apple"};
        
        cout<<"\n "<< fruits.back() << endl;
        
        cout<<"\n "<< fruits.front() << endl;
        
        vector<int> v1{1,2,3,4};
        
        vector<int> v2{5,6,7,7};
        
        v1.swap(v2);
        
        for(int i = 0; i < v2.size(); i++)
        {
                cout<<" "<< v2[i];
        }
        
        cout<<"\n ";
        string str = "Banana";
        
        string str1 = "Chiku";
        
        fruits.insert(fruits.begin()+3,str);
        
        fruits.insert(fruits.begin()+4,5,str1);
        
        fruits.erase(fruits.begin()+3,fruits.begin()+8);
        
        
        for(int i=0;i<fruits.size();i++)
        {
                cout<<" "<< fruits[i];
        }
        
        cout<<"\n";
        
        vector<int> n{1,2};
        vector<int> n1{1,2,3,4,5,6};
        
        vector<int> numbers;
        
        numbers.insert(numbers.end(), n1.begin(), n1.end());
        
        numbers.erase(numbers.begin()+1);
        
        for(int i=0;i<numbers.size();i++)
        {
                cout<<" "<< numbers[i];
        }
        
        cout<<"\n ";
        
        //numbers.clear();
        
        
        vector<char> ch;
        
        for(char i= 'A';i<='Z';i++)
        {
                ch.push_back(i);
        }
        
        for(int i =0;i< ch.size(); i++)
        {
                cout<<" "<< ch[i] << " ";
        }
        
        //ch.resize(10);
        
        cout<<"\n After resize \n";
         
       // ch.resize(40, 'I');
          
        for(int i =0;i< ch.size(); i++)
        {
                cout<<" "<< ch[i] << " ";
        }
        
        int cap = ch.capacity();
        
        
         cout<<"\n ch capacity of vector \t"<< cap <<"\n";
        //ch.clear();
        
        
        cout<<"\n ch vector size \t"<< ch.size() <<"\n";
        
        
        
        cout<<"\n";
        
        
        vector<int> b1{1,2,3,4,5,6,7,8,9,10};
        
        vector<int> b2;
        
        b2.assign(b1.begin()+2, b1.end()-1);
        
        
        for(int i = 0;i<b2.size();i++)
        {
                cout<<" "<< b2[i];
        }
        
        cout<<"\n";
        
        
        vector<char> mummy{'A','L','K','A'};
        
        vector<char> m1;
        
        m1.assign(mummy.begin(),mummy.end());
        
        vector<char>::iterator itr;
        
        for(itr=m1.begin();itr!=m1.end();itr++)
        {
                cout<< *itr;
        }
        
         cout<<"\n";
         
         vector<char> emptyVec;
         
         emptyVec.operator=(m1); 
         
        for(int i = 0;i<emptyVec.size();i++)
        {
                cout<< emptyVec.operator[](i);        
        }
        
        
        
        cout<<"\n";
        
        
        
        vector<int> num1{1,2,3,4,5};
        
       // vector<int>::iterator itr1;
        
        vector<int>::iterator itr1 = num1.emplace(num1.begin()+2,8);
        
        num1.emplace(itr1, 9);
        
        num1.emplace_back(6);
        num1.emplace_back(7);
        
        for(int i = 0; i < num1.size();i++)
        {
                cout<<" "<<num1.operator[](i);
        }
                
        cout<<"\n Reverse Iterator \n ";
        
        vector<int>::reverse_iterator ritr;
        
        for(ritr = num1.rbegin(); ritr != num1.rend(); ritr++ )
        {
                cout<<" "<< *ritr;
        }
        
        
        cout<<"\n max size of vector that can hold \t"<< num1.max_size() << endl;
        
        cout<<"\n Constabnt Iterator \n";
        
        vector<int>::const_iterator citr;
        
        for(citr=num1.cbegin();citr!=num1.cend();citr++)
        {
                cout<<" "<< *citr;
        }
        
        cout<<"\n";
        
        cout<<"\n Constabnt Reverser Iterator \n";
        
        vector<string>::const_reverse_iterator critr = fruits.crbegin();
        
        cout<<" \n "<< *critr << "\n";
        
       
        
        cout<<"\n Using  data() funciton writing vector data into array using pointer \n";
        
        string *k = fruits.data();
        
        vector<string>::iterator itr5;
        
        for(itr5=fruits.begin(); itr5 != fruits.end(); itr5++)
        {
                cout<<" "<< *k++ << " ";
        }
        
         
         cout<<" \n "<< num1.size() << "\n";
         
         cout<<" \n "<< num1.max_size() << "\n";
         
         cout<<" \n "<< num1.capacity() << "\n";
         
        
        cout<<"\n shrink to fit";
        
        
        num1.shrink_to_fit();
        
         cout<<" \n "<< num1.size() << "\n";
         
         cout<<" \n "<< num1.max_size() << "\n";
         
         cout<<" \n "<< num1.capacity() << "\n";
         
         
        
        
   
            cout<<"\n";


        
        
         
         
        
        
return 0;
}















































