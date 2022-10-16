// Write a C++ program using switch statement which accepts two integers and an operator as (+ - * /) and performs the corresponding operation and displays the result.
#include<iostream>
#include<conio.h>
using namespace std;
 
int main()
{
    int n1,n2;
    char ope; 
    cout<<"Enter first number : ";
    cin>>n1;
    cout<<"\nEnter second number : ";
    cin>>n2;
    cout<<"\nEnter operator ( + - * /) : ";
    cin>>ope;
    switch(ope)
    {
        case '+':
            cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
            break;
        case '-':
            cout<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
            break;
        case '*':
            cout<<n1<<" * "<<n2<<" = "<<n1*n2<<endl;
            break;
        case '/':
            cout<<n1<<" / "<<n2<<" = "<<n1/n2<<endl;
            break;
        default : 
            cout<<"Invalid Input"<<endl;
            break;
    }

    return 0;
}
// 3.11.46
