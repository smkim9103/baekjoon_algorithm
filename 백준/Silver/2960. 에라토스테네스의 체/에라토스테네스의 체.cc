#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;


int main()
{
    int n, k;
    int cnt=0;
    cin >> n >> k;
    bool prime[n+1];

    for(int i = 2; i <= n; i++)
    {
        prime[i]=true;
    }
    
    for(int j = 2; j <= n; j++)
    {
        if(prime[j]==true)
        {
            for(int a=j;a<=n;a+=j)
                {
                    if(prime[a]==true)
                    {
                        prime[a]=false;
                        cnt++;
                        if(cnt==k)
                        {
                            cout<<a<<"\n";
                        }
                    }
                }
        }
    }
}