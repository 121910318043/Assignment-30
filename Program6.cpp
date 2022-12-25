#include<iostream>
using namespace std;
/*Write a C++ program to accept area pin code and throw an exception if it does not
contain 6 digits.*/
int main()
{
    int a;int count = 0;
    cout<<"Enter Your PIN Code: ";
    cin>>a;
    try{
        while(a>0)
        {
            a=a/10;
            count++;
            if(count > 6)
            {
                throw exception();
            }
        }if(count<6)
        {
            throw "Error Please Enter 6 Digit PIN";
        }
    }catch (const char *str)
    {
        cout<<str;
    }
    catch(...)
    {
        cout<<"PIN excedeed 6 Digits";
    }
    return 0;
}
