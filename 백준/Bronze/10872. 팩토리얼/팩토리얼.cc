#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=1;
    
    for(int i=1;i<=n;i++)
        {
            a*=i;
        }
    cout<<a;
}