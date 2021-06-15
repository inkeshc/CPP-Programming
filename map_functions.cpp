#include <iostream>
#include <map>

using namespace std;

int main()
{

        std::map<int, std::string> Employees;
        
        Employees[101] = "Rakesh";
        Employees[102] = "Mahesh";
        Employees[103] = "Inkesh";
        Employees[104] = "Nikita";
        Employees[105] = "Riya";
       
        
        cout<<"\n Employees[104] \t"<< Employees[104] <<endl;
        
        cout<<"\n Employees size \t"<< Employees.size() << endl;
        
        cout<<"\n Natural Order \n";

        for(map<int,string>::iterator itr1 = Employees.begin(); itr1 != Employees.end(); itr1++)
        {
                cout<<" "<< (*itr1).first <<" "<< (*itr1).second << " "<< endl;
        }
        
        cout<<"\n Reverse Order \n";
        
        for(map<int,string>::reverse_iterator ritr2= Employees.rbegin(); ritr2 != Employees.rend(); ritr2++)
        {
               cout<<" "<< (*ritr2).first << " "<< (*ritr2).second << " "<< endl; 
        }
        
        
        cout<<"\n operator = is used for copying contents from one map to another map \n";
               
        map<char, int> map1 = { {'a',10}, {'b',20}, {'c',30}};
        
        map1.emplace('d',40);
        
        map1.emplace_hint(map1.end(),'e',50);
        
        map1.erase('b'); // Erasing By key
                
        map<char, int> map2;
        
        map2 = map1; // copying content from one map to another map using operator = 
        
        //map2 = move(map1);
                     
        
        map<char, int>::iterator itr3 = map2.begin();
        
        while(itr3 != map2.end())
        {
                cout<< " "<< (*itr3).first <<" "<< (*itr3).second << endl;
                itr3++;
        }
        
        cout<<"\n at() function is used to access the element in the map with given key Value \n";
        
        Employees.at(102) = "Akshaya";
        
        Employees.at(104) = "Kat";
        
        cout<<" Employee at 103 "<<  Employees.at(103) << endl;
        
        cout<<"\n Natural order of map Employees \n";
        
        for(auto& v1 : Employees)
        {
                cout<<" "<< v1.first << " "<< v1.second << endl;
        } 
        
        cout<<"\n";      
        
return 0;
}
