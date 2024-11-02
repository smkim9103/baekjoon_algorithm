#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int max=0;
    int maxnum=0;
    int a;
    for(int i=0;i<5;i++)
    {
        int sum=0;
        for(int i=0;i<4;i++)
        {
            cin>>a;
            sum+=a;
        }
        if(sum>max)
        {
            max=sum;
            maxnum=i;
        }
    }
    cout<<maxnum+1<<" "<<max;
    return 0;
}