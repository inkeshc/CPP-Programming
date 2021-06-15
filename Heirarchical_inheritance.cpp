#include <iostream>

using namespace std;

// Heirarchical inheritance is deriving more than one classes from one base class

class shape
{

        public:
        int a;
        int b;
        
        void getData(int n,int m)
        {
                a = n;
                b = m;
        }
        
        void getData(int n)
        {
                a = n;
        }
};

class Rectangle : public shape
{

        public:
        int areaOfRectangle()
        {
                int result = a * b;
                return result;
        }
};

class Triangle : public shape
{
        public:
        float triangle()
        {
                float result = 0.5 * a * b;
                return result;
        }
};

class Circle : public shape
{

        public:
        
        int circle()
        {
           int result = 3.14 * a * a;
           return result;     
        }

};

int main()
{

        Rectangle r1;
        int length, breadth;
        cout<<"\n Enter Length and breadth To find Area of Rectangle "<< endl;
        cin>>length>>breadth;
        
        r1.getData(length,breadth);
        
        int res = r1.areaOfRectangle();
        
        cout<<"\n Area of Rectangle is \t"<< res <<endl;
        
        Triangle t1;
        
        cout<<"\n Entet length and breadth for Triangle "<< endl;
        cin>> length >> breadth;
        
        t1.getData(length,breadth);
        
        int result = t1.triangle();
        
        cout<<"\n Area of Triangle is "<< result <<endl;
        
        
        
        Circle c1;
        int radius;
        cout<<"\n Entet radius of Cirlce "<< endl;
        cin>> radius;
        
        c1.getData(radius);
        
        int circleResult = c1.circle();
        
        cout<<"\n Area of Circle is "<< circleResult <<endl;
        
        
        
        
        
        
return 0;
}
