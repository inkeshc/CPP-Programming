#include <iostream>
#include <set>
#include <algorithm>  

using namespace std;
int main()
{

        set<char> s1; // Default Constructor
        
        int size = s1.size();
        
        cout<<"\n size of set char s1 \t"<< size <<"\n";
        
        int numbers[] = {1,2,3,4,5};
        
        //Range constructor
        
        set<int>mySet(numbers,numbers+5);
        
        cout<<"\n mySets size \t"<< mySet.size() <<"\n";
        
        set<int> num1; // Default constructor set No parameters
        num1.insert(10);
        num1.insert(20);
        
        // Copy Costructor
        set<int> num2(num1);
      //  set<int> num2 = num1;
        
        cout<<"\n num 2 size \t"<< num2.size() <<"\n";
        
        set<char> ch1; // Default constructor
        
        ch1.insert('x');
        ch1.insert('y');
        
        // Move Constructor :- 
        
        cout<<"\n Move constructor is Used for move the elements from one set to another set \n";
        
        set<char> ch2(move(ch1));
        
        cout<<"\n Size of move constructor of ch2 is \t"<< ch2.size() <<"\n";
        
        set<string> fruit {"Mango", "Apple", "Grapes", "Orange"}; // Initallizer list constructor for set
        
        cout<<"\n furit size from initiallizer list constructor \t"<< fruit.size() <<"\n";
        
        //~set(); set Destructor is used to destroy all elements in container
        
        
        cout<<"\n operator= is used for copy elements from one set container to another set container \n";
        
        
        set<int> setNum1{ 10,20,30, 40};
        
        set<int> setNum2;
        
        setNum2 = setNum1; // operator = is used to copy elements from one set container to another set container
        
        for(auto itr1 = setNum2.begin(); itr1 != setNum2.end(); itr1++)
        {
                cout<<" "<< *itr1;
        }
        
        cout<<"\n setNum2 size \t"<< setNum2.size() <<"\n";
        
        cout<<"\n";
        
        cout<<"\n operator = is used to move the contents from one set to another set \n";
        
        set<char> chrSet1{'a','e','i','o','u'};
        
        set<char> chrSet2 = move(chrSet1);
        
        for(auto itr2=chrSet2.begin(); itr2 != chrSet2.end(); itr2++)
        {
                cout<<" "<< *itr2;
        }
        
        cout<<"\n";
        
        cout<<"\n operator = is used for copy all elements from initializer list \n";
        
        
        set<int> numbersSet1;
        
        
        numbersSet1 = {100,200,300,400};
        
        for(auto itr3=numbersSet1.begin(); itr3 != numbersSet1.end(); itr3++)
                cout<<" "<< *itr3;
                
        cout<<"\n";
        
        cout<<"\n constant iterator is used with cbegin is a constant iterator returns the first u of set container \n";
        
        
        set<int> incrNum1 = {589,980,110,420};
        
        set<int>::const_iterator citr2;
        for(citr2=incrNum1.cbegin(); citr2 != incrNum1.cend(); citr2++)
                cout<< " "<< *citr2;      
        
        auto low = incrNum1.cbegin();
        auto high = incrNum1.rbegin();
        
        
        cout<<"\n Smallesst Numeber "<< *low <<"\n";
        cout<<"\n Bigest Numeber "<< *high <<"\n";
        
        cout<<"\n rbegin() :- rbegin() make a use of reverser iterator refering to the last element of set container \n";
        
        cout<<"\n set store key elements in sorted manner \n";
        
        set<int> marks = {98,60,42,69,90,35,25,75};
        
        set<int>::reverse_iterator marksRevItr3;
        
        for(marksRevItr3 = marks.rbegin(); marksRevItr3 != marks.rend(); marksRevItr3++)
        {
                cout<<" "<< *marksRevItr3;
        }
        
        cout<<"\n";
        
        
        set<string> alphas{"ddd","bbb","aaa","ccc"};
        
        set<string>::reverse_iterator revItr = alphas.rbegin();
        
        while(revItr != alphas.rend())
        {
                string word = *revItr;
                
                cout<<" "<< word;
               
                revItr++;
        }
        
        cout<<"\n";
       
        cout<<"\n crbegin(); :- crbegin(); make a use of const reverse iterator accessing last elements \n"; 
        set<char> magWords{'I','L','U'};
        
        for(set<char>::const_reverse_iterator critr6=magWords.crbegin(); critr6 != magWords.crend(); critr6++)
                cout<< " "<< *critr6;
                
        cout<<"\n";
        
        
        set<int> numbers2{3,1,2};
        
        for_each(numbers2.crbegin(),numbers2.crend(), [](const int &x){
                cout<<" "<< x <<endl;
        });
        
       
       cout<<"\n ";
       
       
       set<int> mySet55 = {9656,5645,541,662};
       
       while(mySet55.size())
       {
                cout<<" "<< *mySet55.begin();
                
                mySet55.erase(mySet55.begin());
       }
       
       cout<<"\n max_size() always give the size of container that container can hold \n";
       
       cout<<"\n "<< mySet55.max_size() <<endl;
       
       cout<<"\n ";
       
       
       set<int> setL1;
       
       setL1.insert(1000);
       setL1.insert(2000);
       setL1.insert(3000);
       setL1.insert(4000);

       set<int> setL2;
        
       setL2.insert(setL1.find(2000),setL1.end());
       
       
       set<int>::reverse_iterator ritr66;
       
       for(ritr66=setL2.rbegin(); ritr66 != setL2.rend(); ritr66++)
       {
                cout<<" "<< *ritr66;
       }
        
       cout<<"\n";
       
       cout<<"\n c++ set key_comp() function is used to return the comparision object that set be used by set container to compare keys \n";
       
       
       set<int> keyCompNum;
       
       set<int>::key_compare comp = keyCompNum.key_comp();
       
       cout<<"\n Compare keys key less than value returns true other wise false ex comp(1, 3) :=  "<< comp(1,3) << endl;
        cout<<"\n Compare keys key less than value returns true other wise false ex comp(5, 3) :=  "<< comp(5,3) << endl;
      
       cout<<"\n c++ set value_comp() function is used to return the comparision object it comparision done on key values par its takes two argument to return ";
       
       set<int> valueComp;
       
       set<int>::value_compare valComp = valueComp.value_comp();
       
       cout<<"\n Comparee keys return true or false  valComp(2, 3) \t"<< valComp(2, 3) << endl;
       cout<<"\n Comparee keys return true or false valComp(5, 3) \t"<< valComp(5, 3) << endl;
       
       cout<<"\n find() function is used to find an element with given val value, if it elemenets find then iterator pointing to that element otherwise it iterator pointing to end of the set \n";
       
       set<int> windows = {100,200,300,5,99,20,9562,55,69,674,80,41,22,45};
       
       auto itr66 = windows.find(55);
       
       cout<<" "<< *itr66 <<endl;
       
       cout<<"\n  count() function is used  return numbers of elments found in container \n";
       
       set<char> letters =  {'a','g','e','a'};
       
       for(char i = 'a'; i < 'i';i++)
       {
                cout<< " " << i;
                
                if(letters.count(i) > 0)
                {
                        cout<< " element is Found "<< i <<endl;
                }
                else
                        cout<< " element is Not Found "<< i <<endl;
       }
       cout<<"\n Lower bound() and upper bound function is used to found numbers of elements in set container it work like find \n";
       
       set<int> tables;
       
       set<int>::iterator itLow,itUp;
       
       for(int i = 1; i<=10; i++) tables.insert(i*10);
																						
       itLow = tables.lower_bound(30);
       itUp = tables.upper_bound(60);
       
       tables.erase(itLow,itUp);
       
       auto tablesUprBound = tables.upper_bound(80);
       
       auto tablesLwrBound = tables.lower_bound(20);
       
       cout<<"\n upper bound of key 80 is "<< *tablesUprBound << endl;
       cout<<"\n lower bound of key 20 is " << *tablesLwrBound << endl;
       
    
      
       for(set<int>::iterator itr77 = tables.begin(); itr77 != tables.end(); itr77++)
       {
                cout<< " "<< *itr77;
       }       
       
       cout<<"\n equal_range() is used to return the boundary of th range containing all elements in interator \n";

       set<int> n1;
       
       n1.insert(1);
       n1.insert(6);
       n1.insert(10);
       n1.insert(2);
       
       pair<set<int>::const_iterator, set<int>::const_iterator> ret;
       
       ret = n1.equal_range(10);
       
       cout<<"\n lower bound of equal range \t"<< *ret.first <<endl;
       
       cout<<"\n upper Bound of equal range \t"<< *ret.second << endl;
       
       cout<<"\n get_allocator() is used to return the copy of allocator object that is used to construct set \n";
       
       set<double> m1;
       
       double *p;
       
       p = m1.get_allocator().allocate(3);
       
       cout<<"\n size of allacated number \t "<< sizeof(*p) * 4 <<endl;
       
       cout<<"\n value at p \t"<< *(&p) <<endl;
       
       cout<<"\n c++ set == operator is to check whether the two sets are equal or not  \n";
       
       set<int> p1;
       set<int> p2;
       
       
       if(p1 == p2)
                cout<<"\n Both sets are equal "<< endl;
       else
                cout<<"\n  Both sets are Not equal "<< endl;       
       
       cout<<"\n c++ set != ooperator is to check whether the two sets are equal or not \n";
       
       set<char> t1;
       set<char> t2;
       
       cout<<" Both sets are equal \t"<< (t1 != t2) << endl;
       
       t1.emplace('a');
       
       if(t1 != t2)
                cout<<"\n Both sets are Not Equal "<< endl;
       else
                cout<<"\n Both sets are equal  "<< endl;       
                
       cout<<" Both sets are Not Equal \t"<< (t1 != t2) << endl;
       
       t2 = t1;
       
       if(t1 != t2)
                cout<<"\n Both sets are Not Equal "<< endl;
       else
                cout<<"\n  Both sets are equal "<< endl;  
       
       cout<<"\n c++ set < operator is to check whether the first set is less than other or not "; 
       
       set<char> f1;
       set<char> f2;
       
       f2.emplace('a');
       
        if(f1 < f2)
                cout<<"\n set f1 is less than f2 "<< endl;
       
        f1 = f2;
        
        if(!(f1 < f2))
                cout<<"\n set f1 is not less than f2 "<< endl;
                       
       cout<<"\n c++ set <= operator is to check whether first set is less or equal to another set or not \n";


        set<char> k1;
        set<char> k2;
        
        k1.emplace('a');
        k2.emplace('b');
        
        
        if(k1 <= k2)
                cout<<"\n set k1 is less than or equal to k2 \n";
                 
         k1.emplace('b');
         
         if(!(k1 <= k2))
         {
              cout<<"\n set k1 is not less than or equal to k2 \n";
         }        
          
          cout<<"\n c++ set > operator is to check wheather first set is greater than the other set or not \n";
        
          set<char> v1;
          set<char> v2;
          
          v1.emplace('a');
          
          if(v1 > v2)
                cout<<"\n v1 first set is greater than v2 another set \n";          
           
          v2 = v1;
          
          if(!(v1 > v2))
                 cout<<"\n v1 set is not greater than another v2 set \n";
          
          
           cout<<"\n c++ set >= operator is to check wheather the first set is greater than or equal to another set \n";
           
           set<char> g1;
           set<char> g2;
           
           g1.emplace('a');
           g2.emplace('b');
           
           if(g1 >= g2)
           {
                cout<<"\n set g1 is greater than or equal to set g2"<< endl;
           }
           
           
           g2.emplace('c');
           
           if(!(g1 >= g2))
                cout<<"\n set g1 is not greater that or equal to set g2"<< endl;            
        
           cout<<"\n c++ set swap() is used to swap() the contents from one set to another set \n";
                
           set<int> z1 = {10,20,30};

           set<int> z2 = {100,200};
           
           swap(z1,z2);
           
           cout<<"\n set z1 contents \n";
           for(set<int>::iterator itr88 = z1.begin(); itr88 != z1.end(); itr88++)
           {
                cout<<" "<< *itr88;           
           }
           
           
           
           
           cout<"\n set z2 contents \n";

           for(set<int>::iterator itr99=z2.begin(); itr99 != z2.end(); itr99++)
           {
                cout<<" "<< *itr99;
           }
    
           cout<<"\n";
            
             
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
                       
           
        
        
        
        
        
        
        
        
        
        
        
        
              
       
       
       
       
       

       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
      
       
       
       
     
       
       
       
       
       
       
       
       
       
       
       
               
       
       
       
       
       
       
       
       
              
       
        
        
        
        
        
        
        
        
        
        
        
        
               
        
        
        
        
return 0;
}
