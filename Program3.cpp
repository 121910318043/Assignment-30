#include<iostream>
using namespace std;
/*Write a C++ program to perform arithmetic operations on two numbers and throw an
exception if the dividend is zero or does not contain an operator.*/
int main()
{
    try{
        int x,y,a;
        cout<<"Enter X , Y , A";
        cin>>x>>y>>a;
        if(y==0)
        {
            throw y;
        }
        a=x/y;
    }catch(int y)
    {
        cout<<"Error Denominator can't be zero";
    }
    return 0;
}
