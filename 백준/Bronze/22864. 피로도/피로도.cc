#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int A,B,C,M;
    cin>>A>>B>>C>>M;
    int cnt=0,cnt1=0;

    for(int i=0;i<24;i++)
    {
        if(cnt+A<=M)
        {
            cnt+=A;
            cnt1+=B;
        } 
        else
        {
            cnt-=C;
            if(cnt<0)
            {
                cnt=0;
            }
        }
    }

    cout<<cnt1;
}
