#include <iostream>
#include <bitset>

using namespace std;

int main()
{


        bitset<4> b;
        bitset<4> mask("1111");
        
        
        cout<<"\n c++ bitset all() function is used to check all bits are set or not, it return boolean value either true or false \n";
        if(!b.all())
                cout<<"\n All bits are not set "<< endl;
                
        bool result = b.any();
        
        if(result)
                cout<<"\n has minimun one bit set "<< endl;
        else
                cout<<"\n Does not have any bit set "<< endl;
                
        b = mask;
        
        if(b.all())
                cout<<"\n All Bits are set "<< endl;
                
        cout<<"\n c++ bitset any() is used to atleat one bit set is set or not "<< endl;
        bool result1 = mask.any();
        
         if(result1)
                cout<<"\n has minimun one bit set "<< endl;
        else
                cout<<"\n Does not have any bit set "<< endl;
                
        cout<<"\n c++ bitset count() is used to count the numbers of set bits in the binary representation mumbserr"<< endl;
        
        
        bitset<4> b3(string("1100"));
        
        int result2 = b3.count();

        
        cout<<"\n b3 has "<< result2 << " bits "<< endl;
        
        cout<<"\n c++ bitset flip() is used to converting all bits values from zero to one and ones to zero \n";
        bitset<5> b4(string("11100"));
        
        cout<< "\n using flip \t"<< b4.flip() << endl;
        
        cout<< "\n c++ bitset none() is used to check whether no bits is in set \n";
        
        bitset<6> b5;
        bitset<4> b6(string("0101")); 
        
        
        if(b5.none())
                cout<< b5 <<" No bits is in set "<< endl;
        else
                cout<< b5 <<" has "<< b5.count() <<" bits set "<< endl;
                
         
        if(b6.none())
                cout<< b6 <<" No bits is in set "<< endl;
        else
               cout<< b6 <<" has "<< b6.count() <<" bits set "<< endl;
               
         cout<<"\n c++ bitset operator []  is use to access the value to any index of bitset "<< endl;
         
         bitset<4> b7;
         
         b7[1] = 1;
         b7[3] = b7[1]; 
         
         cout<<"\n bits in b7 "<< b7 << endl;
         cout<<"\n bits count is "<< b7.count() << endl;
         
         cout<<"\n c++ bitset reset() is used to reset all bits of bitset \n";
         
         bitset<4> b8(string("1101"));
         
         cout<<"\n Before Reset Apply \t"<< b8 << endl;
         
         cout<<"\n After Reset Apply \t"<< b8.reset() << endl;

         cout<<"\n";
         
         bitset<4> b9(string("1111"));
         
         cout<<"\n Apply reset() on specific index 3 "<< b9.reset(3) << endl;
         
         cout<<"\n c++ bitset set() is used to set all bits to 1 \n";
         
         bitset<6> b10(string("100001"));
         
         cout<<"\n Before apply Set() \t"<< b10 << endl;
         cout<<"\n After apply set() \t"<< b10.set() << endl;
         
         cout<<"\n c++ bitset size() is used to check size of the bitset, it returns number of bits is in set \n";
         
         cout<<" size of b10 "<< b10.size() << endl;
         
         cout<<" size of b4 is "<< b4.size() << endl;
         
         cout<<"\n c++ bitset test() is used to check whether bit is set at that position p or not, if bit is set at position p it returns true oherwise false \n";
         
         bitset<7> b11(string("1001001"));
         
         bool result5 = b11.test(3);
         bool result6 = b11.test(4);
         
         cout <<"\n bitset b11 is set at position 3 "<< result5 << endl;
         cout <<"\n bitset b11 is set at position 4 "<< result6 << endl;
         
         cout<<"\n c++ bitset to_string() is used to construct basic string objects that represents bit is in bitset as a succession of zeros and ones \n";
         
         bitset<4> b12;
         
         b12.set();
         
         string myString = b12.to_string();
         
         cout<<"\n myString \t"<< myString << endl;
         
         cout<<"\n c++ bitset to_ullong() is used to convert the contents of bitset into unsigned long long integer \n";
         
         bitset<4> b13;
         
         b13.set();
         
         cout<< " b13 is an unsigned long long integer "<< b13.to_ullong() << endl;
         
         cout<< "\n";
         
         
         
         
         
         
          
         
         
         
         
         
         
         
         
         
         
         
          
         
         
         
         
         
           
                
         
        
        
        
        
        
        
        
        
        
        
        
        
        
                
                
        
                
       
return 0;
}
