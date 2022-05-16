#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of element";
    cin>>n;
    int pass[n];
    for(int a=0; a<n;a++)
    {
        cin>>pass[a];
    }
    for(int a=0; a<n;a++)
    {
        cout<<pass[a]<<" ";
    }
    
    return 0;
}