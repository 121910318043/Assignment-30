#include<iostream>
using namespace std;
/*Write a C++ program to demonstrate try, throw and catch statements.*/
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    try{
    if(x==0)
        throw x;
    if(x==1)
        throw exception();
    }catch(int x){cout<<"X is 0";}
    catch(...){cout<<"Unknown Exception";}
    return 0;
}
