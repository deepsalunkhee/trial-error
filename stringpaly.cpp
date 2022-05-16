//khatarnak point pe atak gaya bc
#include<iostream>

using namespace std;
int main()
{
    int n;
    string players;
    cout<<"Enter no of players";
    cin>>n;
    for(int a=0;a<=n;a++)
    {
        getline(cin,players);
    }
    
    for(int a=0;a<n;a++)
    {
       cout<<players<<endl;;
    }
    
    return 0;
}