#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"which no factorial u want :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"the factorial is :"<<fact;
    return 0;
}