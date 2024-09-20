#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt1=0;
    int cnt0=0;

    for(int i=1;i<=s.length();i++)
    {
        if(s[i-1]!=s[i])
        {
            if(s[i-1]=='0')
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }
    }
    if(cnt0<=cnt1)
    {
        cout<<cnt0;
    }
    else
    {
        cout<<cnt1;
    }
}