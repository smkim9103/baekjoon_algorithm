#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,n;
    int c,N;
    int minn=1100;
    cin>>a>>b>>n;
    for(int i=0;i<n;i++)
    {
        int s,x=0;
        cin>>c>>N;
        for(int j=0;j<N;j++)
        {
            cin>>s;
            if(s==a)
            {
                x=s;
            }
            else if(s==b && x!=0)
            {
                minn=min(minn,c);
            }
        }
    }
    if(minn==1100)
    {
        cout<<"-1";
    }
    else
    {
        cout<<minn;
    }
}