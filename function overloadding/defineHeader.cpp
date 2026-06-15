#include<iostream>
#include "header.h"
using namespace std;

myclass :: myclass(){a=0,b=0;}

void myclass :: setdata()
{
    cout<<"enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number<<endl";
    cin>>b;

    calculate();
}

void myclass :: calculate()
{
    result = a*b;
}
void myclass :: calculate(int a)
{
    this->a =a;

    result = a+b;
    cout<<"sum"<<result<<endl;
}

void myclass :: calculate(int a,int b)
{
    this -> a = a;
    this -> b = b;
}

void myclass :: getdata()
{
    cout<<"Result = "<<result<<endl;
}
