#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
    int t,n,a;
    int cnt=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        while(n>0)
        {
            a=n%2;
            n=n/2;
            if(a==1)
            {
               cout<<cnt<<" "; 
            }
            cnt++;
        }
        cout<<"\n";
        cnt=0;
    }
    return 0;
}