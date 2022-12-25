#include<iostream>
using namespace std;
/*Write a C++ program to accept a username if the username has less than 6 characters
or does contain any digit or special symbol.*/
int main()
{
    char username[20];
    cout<<"enter your name: ";
    cin>>username;
    int i=0,d=0;
    try{
        while(username[i])
        {
            if(i>6)
                throw exception();
            if(username[i]>='1' && username[i]<='9')
                d=1;
            else if(username[i]<'a' && username[i]>'z' || username[i]<'A' && username[i] > 'Z')
                d=1;
            i++;
        }
        if(!d)
        {
            throw "Error Name should Contain At least 1 Digit or Special Character";
        }
    }catch(const char *str)
    {
        cout<<str;
    }
    catch(...)
    {
        cout<<"User Name Exceeded 6 characters ";
    }
    return 0;
}
