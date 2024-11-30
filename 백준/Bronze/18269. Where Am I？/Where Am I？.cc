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
    string a;
    cin>>n>>a;

    for(int k=1;k<=n;k++)
    {
        bool ok = true;

        for(int i=0;i<=n-k;i++)
        {
            string s= a.substr(i,k);
            for(int j=0;j<=n-k;j++)
            {
                if(i==j) continue;
                string p= a.substr(j,k);
                if(s==p)
                {
                    ok=false;
                }
            }
        }
        if(ok)
        {
            cout<<k;
            return 0;
        }
    }
}