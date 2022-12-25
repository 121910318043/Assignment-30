#include<iostream>
#include<cstring>
using namespace std;
/*Write a C++ program to accept Gmail id only and throw an exception if the id does not
contain @ and gmail.com.*/
int main()
{
    char email[30];
    char g[11]="moc.liamg@";
    cout<<"Enter Your Email";
    cin>>email;
    try{
        for(int i = 0 ; g[i] ; i++)
        {
            if(email[strlen(email)-1-i] != g[i])
            {
                throw "Please Enter Valid Email";
            }
        }
    }catch(const char *str)
    {
        cout<<str;
    }
    return 0;
}

