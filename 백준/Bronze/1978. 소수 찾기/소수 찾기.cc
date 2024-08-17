#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a;
    int b;
    int cnt=0;
    int cnt1=0;

    cin>>a;

    for(int i=1;i<=a;i++)
        {
            cin>>b;
            for(int i=1;i<=b;i++)
                {
                    if(b%i==0)
                    {
                        cnt++;
                    }
                }
            if(cnt==2)
            {
                cnt1++;
            }
            cnt=0;
        }
    cout<<cnt1;
}