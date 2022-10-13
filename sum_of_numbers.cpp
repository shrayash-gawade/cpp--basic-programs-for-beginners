#include<iostream>
using namespace std;
int main()
{
     int a,b,c;                 //in c++ we need to declare data type of variable we r using 
    cout<<"enter 1st no:";      // cout is use to print 
    cin>>a;                     //cin is used to have input 
    cout<<"enter 2nd no:";
    cin>>b;
    c=a+b;                      // here we perform the opearation req i;e addition 
    cout<<"the sum of "<<a << " and "<<b <<" is "<<c;
    return 0;                   // when we are using int main () return 0 is must ,
}