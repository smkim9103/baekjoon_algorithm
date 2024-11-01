#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int a,b;
    int cnt=0,sum=0,num=1;
    cin>>a>>b;

    while(cnt<b)
    {
        for(int i=0;i<num;i++)
        {
            cnt++;
            if(cnt>=a && cnt<=b)
            {
                sum+=num;
            }
            if(cnt>=b)
            {
                break;
            }
        }
        num++;
    }
    cout<<sum;
    
    return 0;
}