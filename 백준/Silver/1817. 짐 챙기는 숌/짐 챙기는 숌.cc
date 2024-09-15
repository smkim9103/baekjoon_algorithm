#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int cnt=0;
    int sum=0;
    int a;
    
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(sum+a>m)
        {
            cnt++;
            sum=a;
        }
        else
        {
            sum+=a;
        }
    }
    if(sum>0)
    {
        cnt++;
    }
    cout<<cnt;
}
