#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,s,t,b;
    cin>>n;
    int basket[1000] = {};
    int max=0;
    for(int i=0;i<n;i++)
        {
            cin>>s>>t>>b;
            for(int j=s;j<t;j++)
                {
                    basket[j]=basket[j]+b;
                    if(basket[j]>max)
                    {
                        max=basket[j];
                    }
                }
        }
    cout<<max;
}