#include<iostream>
#include<cstring>
using namespace std;
/*Write a C++ program to perform arithmetic operations on two numbers and throw an
exception if the dividend is zero or does not contain an operator.*/
int main()
{
    char str[30];
    int count = 0;
    cin>>str;
    int s = strlen(str);
    try{
        for(int i=0;str[i];i++)
        {
            if(str[i]=='@')
            {
                count++;
            }
        }
        if(count==0)
        {
            throw count;
        }
        if(count>1)
        {
            throw exception();
        }
    }catch(int c)
    {
        cout<<"Must contain @";
    }
    catch(...)
    {
        cout<<"more than 1 @ symbol";
    }
    return 0;
}
