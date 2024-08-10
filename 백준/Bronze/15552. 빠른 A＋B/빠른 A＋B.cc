#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t,a,b;
    cin>>t;
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b;
        cout<<a+b<<"\n";
    }
}