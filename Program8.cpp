#include<iostream>
using namespace std;
/*Write a C++ program to accept a password and throw an exception if the password has
less than 6 characters or does not contain a digit or does not contain any special
character or does not contain any capital letter.*/
int main()
{
    char password[20];
    cout<<"Enter your Password: ";
    cin>>password;
    try{
        int i,digit=0,special=0,Alpha=0;
        while(password[i])
        {
            if(password[i]>='0' && password[i]<='9')
                digit=1;
            else if(password[i]>='A' && password[i]<='Z')
                Alpha=1;
            else if(password[i]<'a' || password[i]>'z')
                special=1;
            i++;
        }
        if(i<6)
        {
            throw "Password has less than 6 characters";
        }
        if(!(digit && special && Alpha))
        {
            throw exception();
        }
    }catch(const char *str)
    {
        cout<<str;
    }
    catch(...)
    {
        cout<<"Password Should Contain Capital Digit Special Characters";
    }
    return 0;
}
