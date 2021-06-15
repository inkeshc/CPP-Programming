#include <iostream>
#include <cstring>

using namespace std;

int main()
{


      string word = "Hello JAVATPOINT";
      
      int len = word.length();
      
      cout<<"\n Word Length \t"<< len << endl;
      cout<<"\n Word size \t"<< word.size() << endl;
      
      string r = "10";
      string s = "20";
      
      cout<<"\n Before Swap "<< r <<" rupees \t"<< endl;
      cout<<"\n Before Swap "<< s <<" rupees \t"<< endl;
      
      r.swap(s);
      
      cout<<"\n After Swap "<< r <<" rupees \t"<< endl;
      cout<<"\n After Swap "<< s <<" rupees \t"<< endl;
      
      
      string str= "javatpoint";  
cout<<"String is :"<<str<<"\n";  
cout<<"\n Word size \t"<< str.size() << endl;

str.resize(4);  
cout<<"After resizing, string is "<<str;  

cout<<"\n Word size \t"<< str.size() << endl;





      
      
       
return 0;
}
