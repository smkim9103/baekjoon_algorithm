#include <iostream>
#include<algorithm>
using namespace std;

long long cost[100000]={0};

int main()
{
    long long n;
    cin >> n;
    
    for(int i=0;i<n;i++)
    {
        cin>>cost[i];
    }
    
    sort(cost,cost+n);
    
    long long max=0;
    long long maxx;
    
    for(int i=0;i<n;i++)
    {
        long long tuition=cost[i]*(n-i);
        if(max<tuition)
        {
            max=tuition;
            maxx=cost[i];
        }
    }
    cout<<max<<" "<<maxx;
}