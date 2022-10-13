#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,root1,root2;
    // ax^2+bx+c the equation form 
    cout<<"enter a:"<<endl<<"enter b"<<endl<<"enter c:"<<endl;
    cin>>a>>b>>c;
    root1=(-b-sqrt(b*b-4*a*c))/(2*a);
    root2=(-b+sqrt(b*b-4*a*c))/(2*a);
    cout<<"the roots are :"<<int (root1)<<int(root2);
    return 0;


}