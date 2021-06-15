#include <iostream>
#include <deque>

using namespace std;


int main()
{
        
        cout<<"\n Deque using assign() :- assign() function use to assigned new content and replacing old one \n";
        deque<int> firstVec{1,2,3,4,5};
        
        deque<int> secondVec;
        
        secondVec.assign(firstVec.begin(),firstVec.end());
        
        deque<int>::iterator itr = secondVec.begin();
        
        for(itr = secondVec.begin(); itr != secondVec.end(); itr++)
        {
                cout<<" "<< *itr;
        }
        
        cout<<"\n";
        
        cout<<"\n Deque using emplace(); :- emplace() function is use to inserting new element at specified position \n";
        deque<int> firstVecE1{1,2,3,4,5};
       
        deque<int>::iterator itr2;
        
        firstVecE1.emplace(firstVecE1.begin()+2,99);
        
        
        for(itr2=firstVecE1.begin();itr2 != firstVecE1.end(); itr2++)
        {
                cout<<" "<<*itr2;
        }
        
        cout<<"\n";
        cout<<"\n";
        
        deque<string> str1{"C","+"};
        
        
        deque<string>::iterator itr3 = str1.begin();
        
        itr3++;
        
        str1.emplace(itr3,"+");
        
        for(itr3 = str1.begin(); itr3 != str1.end();itr3++)
        {
                cout<<" " <<*itr3;
        }
        
        cout<<"\n";
       
        cout<<"\n Deque using emplace_back():- emplace_back() used for insert new element at end of the deque and its vector increased by one  \n";
        
        deque<int> f1Vec{1,2,3,4};
        
        deque<int>::iterator itr44;
        
        f1Vec.emplace_back(5);
        
        for(itr44=f1Vec.begin(); itr44 != f1Vec.end();itr44++)
                cout<<" "<< *itr44;
                


         deque<string> str33{"Inkesh"};
         
         str33.emplace_back("Chaudhari");
         
         deque<string>::iterator itr33;
         
         for(itr33=str33.begin(); itr33 != str33.end(); itr33++)
                cout<< " "<< *itr33;
                
        cout<<"\n";
        
        cout<<"\n Deque using emplace_front():- emplace_front() used for insert new element at beggining of the deque and its vector increased by one  \n";
        
        deque<string> fruits{"banana","Pineapple"};
        
        deque<string>::iterator itr55;
        
        fruits.emplace_front("Apple");
        
        fruits.emplace_front("StrawBerry");
        
        for(itr55=fruits.begin();itr55 != fruits.end();itr55++)
        {
                cout<<" "<< *itr55;
        }
        
        
         cout<<"\n";
         
         cout<<"\n Deque using insert(); :- insert() is used for inserting a new element at specified postion and size of the container are increase by 1 "<< endl;
         
         deque<string> lang{"JAVA",".NET","C#"};
         
         deque<string>::iterator itr66 = lang.begin();
         
         itr66++;
         
         lang.insert(itr66,"C++");
         
         for(itr66=lang.begin(); itr66 != lang.end(); itr66++)
         {
                cout<< " " << *itr66;
         }
         
         cout<<"\n";
         
         deque<int> vecNum1{1,2,3,4,5};
         
         deque<int>::iterator itr77 = vecNum1.begin();
         
         //itr77++;
         
         vecNum1.insert(itr77+4,5,99);
         
         for(itr77=vecNum1.begin(); itr77 != vecNum1.end();  itr77++)
         {
                cout<<" "<< *itr77;
         }
         
         cout<<"\n";
         
         
         cout<<"\n Deque using push_back(); :- push_back() is used for inserting a new element at the end of the deque and size of the container are increase by 1 "<< endl;
         
         
         vecNum1.push_back(1000);
         
         deque<int>::iterator itr88;
         
         for(itr88=vecNum1.begin(); itr88 != vecNum1.end(); itr88++)
         {
                cout<< " "<< *itr88;
         }

         cout<<"\n";
         
        cout<<"\n Deque using push_front(); :- push_front() is used for inserting a new element at the begining of the deque and size of the container are increase by 1 "<< endl;
        
        
        deque<int> d1{2,3,4,5};
        
        deque<int>::iterator itr99;
        
        d1.push_front(1);
        
        d1.pop_back();
        
        d1.pop_front();
        
        for(itr99 = d1.begin(); itr99 != d1.end(); itr99++)
        {
                cout<<" "<< *itr99;
        }
        
        
        cout<<"\n ";
        
        cout<<"\n Deque using swap() :- it is use for swap one container with another container \n";
        
        
        deque<int> first{1,2,3,4};
        
        deque<int> second{10,20,30,40};
        
        first.swap(second);
        
        deque<int>::iterator itr100;
        
        itr100 = first.begin();
        
        while(itr100 != first.end())
        {
                cout<< " "<< *itr100;
                itr100++;
        }

        cout<<"\n ";
        
        deque<int>::iterator itr111;
        
        itr111 = second.begin();
        
        while(itr111 != second.end())
        {
                cout<< " "<< *itr111;
                itr111++;
        }
        
         cout<<"\n ";
         
         cout<<"\n Deque using operator=() :- operator=() its used for storing old container data into the new container of the same type "<< endl;
         
         deque<string> towns{"Katol","Nagpur"};
         
         deque<string> cities;
         
         deque<string>::iterator itr122;
         
         cities.operator=(towns);
         
         for(itr122=cities.begin(); itr122 != cities.end(); itr122++)
         {
                cout<<" "<<*itr122;
         }
         
         cout<<"\n";
         
         
        
        

         
          
         
         
         
         
       

return 0;
}









































