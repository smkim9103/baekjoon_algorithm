#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p[n];
    int sum=0;
    int cnt=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            sum=0;
            for(int a=i;a<=j;a++)
            {
                sum+=p[a-1];
            }
            for(int a=i;a<=j;a++)
            {
                if(sum%(j-i+1)==0 && sum/(j-i+1)==p[a-1])
                {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}