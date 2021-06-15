#include <iostream>

using namespace std;

class shape
{
        public:
        virtual void draw()
        {
                cout<<"\n Drawing .."<< endl;
        }
        
};

class Rectangle : public shape
{
        public:
        void draw()
        {
                cout<<"\n Drawing Rectangle .. "<< endl;
        }

};

class Circle : public shape
{
        public:
        void draw()
        {
                cout<<"\n Drawing Circle .. "<< endl;
        }
};


int main()
{
        shape *s;
        shape sh;
        
        Rectangle rec;
        Circle cir;
        
        s=&sh;
        s->draw();
        
        s=&rec;
        
        s->draw();
        
        s=&cir;
        
        s->draw();
        
        
        
        
        
        
            
        
return 0;
}
