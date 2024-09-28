#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,s;
    cin>>n>>s;
    int q[100000];
    int v[100000];
    int t=0;
    int p=1;
    int cnt=0;
    int a=0;
    
    for(int i=0;i<n;i++)
        {
            cin>>q[i]>>v[i];
            t+=q[i];
        }
    int bessie=s-1;
    while((bessie>=0) && (bessie<=n) && (cnt<t) && (a<=1000000))
        {
            if(q[bessie]==0)
            {
                if(p>0)
                {
                    p+=v[bessie];
                    p=p*-1;
                }
                else if(p<0)
                {
                    p-=v[bessie];
                    p=p*-1;
                }
            }
            else if((v[bessie]>=0) && (abs(p)>=v[bessie]))
            {
                cnt++;
                v[bessie]=-1;
            }
            bessie+=p;
            a++;
        }
    cout<<cnt;
}