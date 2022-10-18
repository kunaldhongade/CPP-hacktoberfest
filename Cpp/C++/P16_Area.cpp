#include<iostream>
#include<conio.h>

using namespace std;

class Shape
{
    protected:
    double x;
    double y;
    public:
    void getdata()
    { 
        cout<<"Enter the first Dimension : ";
        cin>>x;
        cout<<"Enter the second Dimension : ";
        cin>>y;
    }
    virtual void Display_area()=0;
};

class Triangle:public Shape
{
    public:
    void Display_area()
    {
        float area = x*y/2.0;
        cout<<"The Area of Triangle : "<<area<<endl;
    }
};

class Rectangle:public Shape
{
    public:
    void Display_area()
    {
        int area = x*y;
        cout<<"The Area of Rectangle : "<<area<<endl;
    }
};

int main()
{
    Shape *ptr;
    Rectangle r1;
    ptr = &r1;
    r1.getdata();
    ptr->Display_area();
    Triangle t1;
    t1.getdata();
    t1.Display_area();
    getch();
    return 0;
}