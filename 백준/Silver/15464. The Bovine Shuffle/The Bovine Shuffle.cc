#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int order[101];
    int cow[101];
    int ans[101];

    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        order[a]=i;
    }
    
    for(int i=1;i<=n;i++)
    {
        cin>>cow[i];
    }

    for(int i=0;i<3;i++)
    {
        for(int j=1;j<=n;j++)
        {
            ans[order[j]]=cow[j];
        }
        for(int j=1;j<=n;j++)
        {
            cow[j]=ans[j];
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<"\n";
    }
    return 0;
}