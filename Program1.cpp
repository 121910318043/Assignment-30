#include<iostream>
using namespace std;
/*Write a C++ program to demonstrate the use of try, catch block with the argument as an
integer and string using multiple catch blocks.*/
int main()
{
    int a=0;
    char b[10];
    try{
        if(a==0)
        {
            throw a;
        }
        if(b[0]=='a')
        {
            throw b;
        }
    }
    catch(char *a)
    {
        cout<<"First Letter is a";
    }
    catch(int x)
    {
        cout<<"X cannot be 0";
    }
    return 0;
}
