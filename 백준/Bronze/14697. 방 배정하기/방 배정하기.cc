#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
    int a,b,c;
    int ppl;
    bool flag=0;
    
    cin>>a>>b>>c>>ppl;

    for(int i=0;i<300;i++)
    {
        for(int j=0;j<300;j++)
        {
            for(int k=0;k<300;k++)
            {
                if(a*i+b*j+c*k==ppl)
                {
                    flag=1;
                }
            }
        }
    }
    if(flag==1)
    {
        cout<<"1";
    }
    else
    {
        cout<<"0";
    }
}