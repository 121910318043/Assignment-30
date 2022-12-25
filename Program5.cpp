#include<iostream>
using namespace std;
/*Write a C++ program to accept a mobile number and throw an exception if it does not
contain 10 digits.*/
int main()
{
    long long int a,count1=0;//Long Long int For More than 10 digits
    cout<<"Enter your Mobile Number: ";
    cin>>a;
    try{
        while(a>0)
        {
            count1++;
            if(count1>10)
            {
                throw exception();
            }
            a=a/10;
        }
        if(count1<10)
        {
            throw "Please Enter Valid Mobile Number";
        }
    }catch(const char *str)
    {
        cout<<str;
    }
    catch(...)
    {
        cout<<"Error Phone Number Excedeed 10 digits";
    }
    return 0;
}
