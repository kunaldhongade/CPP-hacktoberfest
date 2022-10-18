/*
Write a C++ program to create two classes Rectangle1 and Rectangle 2. Compare area of both rectangles using friend function
*/
#include<iostream>
#include<conio.h>
using namespace std;
class R2;
class R1
{
    private:
    float length,breadth;
    public :
    void get(void);
    friend void area(Rectangle1,Rectangle2);
};
void R1 :: get(void)
{
    cout<<"Enter Rectangle 1 length : ";
    cin>>length;
    cout<<"Enter Rectangle 1 breadth : ";
    cin>>breadth;
}
class R2
{
    private:
    float length,breadth;
    public :
    void get(void);
    friend void area(Rectangle1,Rectangle2);
};
void R2 :: get(void)
{
    cout<<"Enter Rectangle 2 length : ";
    cin>>length;
    cout<<"Enter Rectangle 2 breadth : ";
    cin>>breadth;
}
void area(R1 one, R2 two)
{
    float area1 = one.length*one.breadth;
    float area2 = two.length*two.breadth;
    (area1>area2)? cout<<"Rectangle1 is Greater which has area about "<<area1:cout<<"Rectangle2 is Greater which has area about "<<area2;
}
int main()
{
    R1 rect1;
    R2 rect2;
    rect1.get();
    rect2.get();
    area(rect1,rect2);
    return 0;
}
