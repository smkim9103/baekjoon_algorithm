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
    long long d[n-1];
    long long price[n];
    long long total=0;

    for(int i=0;i<n-1;i++)
    {
        cin>>d[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>price[i];
    }
    long long min=price[0];

    for(int i=0;i<n-1;i++)
    {
        total+=min*d[i];

        if(price[i+1]<min)
        {
            min=price[i+1];
        }
    }

    cout<<total;
    return 0;
}