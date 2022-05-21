#include<iostream>
using namespace std;


int main()
{
    int n,s;
    cin>>n;
    for (int i = 2; i < n; i++)
    {
        /* code */
        
        if(n%i==0)
        {
            cout<<"no prime";
            
        }
        
    }
    if(n==2)
        {
            cout<<"prime";
        }
    else
        {
            cout<<" prime";
            break;
        }
    return 0;
}