/*Write a C++ program to accept Nickname and throw an exception if it has greater than 8
characters or does contain a digit or special symbol or space.*/
#include<iostream>
using namespace std;
int main()
{
    char NickName[20];
    cout<<"Enter a NickName: ";
    cin>>NickName;
    try{
        int i=0;
        while(NickName[i])
        {
            if(i>8)
                throw exception();
            if(NickName[i]>='1' && NickName[i]<='9')
            {
                throw "Error Can't Enter Digits in Nick Name";
            }
            else if(!(NickName[i]>='a' && NickName[i]<='z' || NickName[i]>='A' && NickName[i]<='Z'))
            {
                throw 3;
            }
            i++;
        }
    }catch(int x)
    {
        cout<<"Error Can't Enter Special Symbol As NickName";
    }

    catch(const char * str)
    {
        cout<<str;
    }
    catch(...)
    {
        cout<<"Error Character Greater than 8";
    }
    return 0;
}
