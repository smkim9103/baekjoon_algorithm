#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int cnt=0;
    int sum=0;
    int a=0;
    int b=0;

    for(int i=0;i<m;i++)
        {
            cin>>a>>b;
            if(b>n)
            {
                if(b-n>cnt)
                {
                    cnt=b-n;
                }
                sum+=b-n;
            }
        }
    cout<<sum-cnt;
}