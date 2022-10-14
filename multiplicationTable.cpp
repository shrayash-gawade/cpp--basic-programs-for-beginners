// multiplication table using while loop 




// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1,n;
//     cout<<"enter which table u want :";
//     cin>>n;
//     while(i<=10)
//     {
//         cout<<n<<"x"<<i<<"="<<n*i<<endl;
//         i++;
//     }
//     return 0;

// }



// multiplication table using for loop 


#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter which table u want :";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;

    }
    return 0;
}