#include <iostream>
#include <algorithm>

using namespace std;

bool oddElement(int k)
{
        return(k%2==1);
}

bool isEven(int k)
{
        return ((k%2)==0);
}

void MultipleOfNum(int k)
{
        cout<< k *2 <<" ";
}
int main()
{
        
        cout<<"\n C++ algorithm all_of() its return true if pred argument value is passed to true in range otherwise false \n";
        array<int,6> arr = {10,-5,6,-1,20,5};
        
        if(all_of(arr.begin(), arr.end(), [](int k){ return k>0; }))
                cout<<"\n All elements are positive \n";
        else
                cout<<"\n All elements are Not Positve \n";
                
         cout<<"\n C++ algorithm any_of() if any of the value of pred argument is true its returns true other wise false \n";
         
         array<int,6> arr2 = {2,4,6,27,19,15};
         
         if(any_of(arr2.begin(),arr2.end(), [](int x){ return x%2;}))
                cout<<"\n Table 2 value present in array \n";
         else
                cout<<"\n Table 2 Values is not preset in array \n";
                
                
         cout<<"\n C++ algorithm adjacent_find() its returns iterator from given range fist to last, if two cosecutive matching elements is found its returns true otherwise its returns false \n";
         
         int newInts[] = {10,20,5,50,60,8,8,40};
         
         vector<int> newVector(newInts, newInts+7);
         
         vector<int>::iterator it;
         
         it = adjacent_find(newVector.begin(), newVector.end());
         
         if(it != newVector.end())
                cout<<"\n In given range first pair of sequence is repeated \t"<< *it <<endl;
                
         cout<<"\n C++ algorithm copy() functions is used to copy the all elements from one container to different container starting from result \n";
         
         vector<int> newVector2(7);
         
         copy(newInts,newInts+7, newVector2.begin());       
         
         for(vector<int>::iterator itr2=newVector2.begin(); itr2 != newVector2.end(); itr2++)
                cout<<" "<< *itr2;
                
         cout<<"\n C++ algorithm copy_if() is used to copy all the from one container to another containe if given undary condition is true its return all the elements from first to last otherwise false \n";
         
         vector<int> vector2 = {10,20,-6,-8,30};
         
         vector<int> vector3(vector2.size());
         
         auto itr3 = copy_if(vector2.begin(), vector2.end(), vector3.begin(), [](int k){ return !(k < 0);});
         
         vector3.resize(distance(vector3.begin(),itr3));
         
         for(auto& x : vector3)
                cout<<" "<< x ;
                
                
         cout<<"\n C++ algorithm count() is used count number of occurance of element is returned from given range \n";
         
         int newCount = count(newInts, newInts+7, 50);
         
         cout<<"\n 50 Appear  "<< newCount <<" times "<< endl;
         
         int arr3[] = {40,50,60,90,90,90,90,6,40,4};
         
         cout<<"\n whole array size \t"<< sizeof(arr3) << endl;
         
         cout<<"\n array first size \t"<< sizeof(arr3[0]) << endl;
         
         int size = sizeof(arr3)/sizeof(arr3[0]);
         
         cout<<" number of elements present in array \t"<< size << endl;
         
         cout<<"\n 90 appear "<< count(arr3,arr3+size,90) <<" times"<< endl;
         
         vector<int> newVector4(arr3, arr3+9);
         
         cout<<"\n 40 appear "<< count(newVector4.begin(), newVector4.end(), 40) << " times"<< endl;
         
         cout<<"\n C++ algorithm count_if() count number of occurance in the vector if pred  value condition return true otherwise false ";

         vector<int> V4;
         
         for(int i=1;i<=10;i++)
                V4.push_back(i);
                
         int countNum = count_if(V4.begin(),V4.end(), oddElement);
         
         cout<<"\n Odd elements in container appears "<< countNum <<" times "<< endl;
         
         cout<<"\n C++ algorithm equal() compares elements in both container, return true if both the container have matching elements or else return false \n";
         
         int arr5[] = {10,20,30,40,50};
         
         vector<int> newV5(arr5, arr5+4);
         
         if(equal(newV5.begin(),newV5.end(), arr5))
                cout<<"\n Both the containers have matching elements \n";
         else
                cout<<"\n Both the containers have difference in matching elements \n";
                
                
          vector<char> v6;
          
          for(char i='a';i<='z';i++)
                v6.push_back(i);
                
          vector<char>::iterator itr4;
          
          itr4 = find(v6.begin(), v6.end(), 'z');
          
          if(itr4 != v6.end()) 
                cout<<"\n character 'z' found in vector container "<< *itr4 << endl; 
                
          cout<<"\n C++ algorithm find_end() is used to if an occurance is found its return the first element is retrurned, otheriwise last element is returned \n";
          
          int newInts3[] = {1,2,3,4,5,1,2,3,5,6};
          
          vector<int> v7(newInts, newInts+10);
          
          int part1[] = {1,2,3};
          
          vector<int>::iterator itr5;
          
          itr5 = find_end(v7.begin(),v7.end(),part1,part1+3);
          
          if(itr5 != v7.end())
                 cout<<"\n path 1 last found at position "<< (itr5-v7.begin()) <<"\n";
                 
                 
          cout<<"\n c++ Algorithm find_end() searches for last occurance in the container if its found return true otherwise return false ";
          
          int newInts4[] = {1,2,3,4,5,1,2,3,4,5,1,2,3,4,5};
          
          vector<int> vector8(newInts4,newInts4+15);
          
          int part2[] = {1,2,3};
          
          vector<int>::iterator itr6;
          
          itr6 = find_end(vector8.begin(), vector8.end(), part2, part2+3);
          
          //std::cout<<"\n vector8.begin() "<< *vector8.begin() << endl;
          //std::cout<<"\n vector8.end() "<< *vector8.end() << endl;
          
          //std::cout<<"\n  itr6 "<< itr6 << endl;
          
          if(itr6 != vector8.end())
                cout<<"\n part1 last found at position "<< itr6 - vector8.begin() << endl;
                
           cout<<"\n c++ Algorithm find_first_of() compares the values in stored in two containers, if matching element found in both container its return true otherwise false \n";
           
           int newInts5[] = {'a','b','c','A','B','C'};
           
           vector<char> v9(newInts5, newInts5+6);
           
           vector<char>::iterator itr7;
           
           int part5[] = {'A','B','C'};
           
           itr7 = find_first_of(v9.begin(),v9.end(),part5,part5+3);
           
           if(itr7 != v9.end())
               cout<<"\n Match 1 is Found \t"<< *itr7 << endl;
                
           cout<<"\n C++ Algorithm find_if() return true if its condition is satisfied and matching element found in range its return true otherwise false \n";
           
           vector<int> numbers4 = {33,20,30,90}; 
           
           vector<int>::iterator itr8;
           
           itr8 = find_if(numbers4.begin(), numbers4.end(), isEven);          
           
           if(itr8 != numbers4.end())
                cout<<"\n Out of Given Elements, First Even Element is Found "<< *itr8 << endl;
                
            cout<<"\n C++ algorithm find_if_not() retkurns the first element in range is specified boolean condtion is false other its return the last element in range  ";
            
            
            vector<int>newVector20 = {20,35,60,90};
            
            vector<int>::iterator itr9;
            
            itr9 = find_if_not(newVector20.begin(), newVector20.end(), [](int k){return k%2==0;});
            
            cout<<"\n  Odd Number element found in vector using find_if_not() "<< *itr9 << endl;
            
            cout<<"\n C++ algorithm for_each() applies function func to all elements in container from first to last in range \n";

             vector<int> V10 = {1,2,3,4,5,6,7,8,9,10};
             
             for_each(V10.begin(),V10.end(), MultipleOfNum);
             
             cout<<"\n C++ Algorithm move() is used to moving elements from one container to another container in range \n";
             
             vector<std::string> vecNames5 = {"Inkesh","Sarvadnya","Veera","Jiya"};
             
             vector<std::string> receiveNames(vecNames5.size());
             
             move(vecNames5.begin(),vecNames5.end(), receiveNames.begin());
             
             for(string &x : receiveNames)
                cout<<"[ "<< x <<" ] ";
                
             cout<<"\n C++ Algorithm copy_backward() is used to copying the elements in backword order from one vetor to another \n";
             
             vector<int> v11;
             
             for(int i=1;i<10;i++)
                v11.push_back(5*i);
                
            vector<int> vRes12(v11.size());
                
             copy_backward(v11.begin(),v11.end(),vRes12.end());
             
             vector<int>::iterator itr11;
             
             for(itr11 = vRes12.begin(); itr11 != vRes12.end(); itr11++)
                cout<<" "<< *itr11 <<"";
                
             cout<<"\n C++ Algorithm copy_n() copying the elements from one vector to another vector with n elements \n";
             
             vector<int> vecResult14(v11.size());
             
             copy_n(v11.begin(),5,vecResult14.begin());
             
             vecResult14.resize(5);
             
             vector<int>::iterator itr12;
             
             for(itr12 = vecResult14.begin(); itr12 != vecResult14.end(); itr12++)
                cout<<" "<< *itr12;
                
             cout<<"\n C++ Algorithm search() searches the range of occurances of subsequence is found in range of the container is returns an iterator that position \n";
             
             vector<int> V20;
             
             for(int i=1;i<=10;i++)
                V20.push_back(i*10);
                
              int vecPart[] = {70,80,90};
              
              vector<int>::iterator itr13;
              
              itr13 = search(V20.begin(),V20.end(),vecPart,vecPart+3);
              
              if(itr13 != V20.end())
                cout<<"\n vector part Found at position "<< (itr13 - V20.begin()) << endl;
             
             cout<<"\n  C++ Algorithm is_permutation() compares the elements in both container if matching elements found even if is order range is different its return true otherwise it returns false \n";
             
              array<int,5> a = {6,8,7,9,10};
              array<int,5> b = {10,6,8,9,7};
              
              if(is_permutation(a.begin(),a.end(),b.begin()))
                cout<<"\n a and b have same elements \n";
                
              cout<<"\n";
             
             
             
             
                         
            
                       
                        
  
           
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                

         
         
         
         
         
         
         
         
         
         
         
         
                  
         
          
         
         
         
         
         
         
         
         
         
         
         
         
         
         
               
        
                

return 0;
}
