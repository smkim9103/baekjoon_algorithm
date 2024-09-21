#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,k;
    int cnt=0;
    cin>>n>>k;

    string s;
    cin>>s;
    bool arr[1000000]={false};


    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='P')
        {
            for(int j=max(0,i-k);j<=min(i+k,n-1);j++)
            {
                if(s[j]=='H' && arr[j]==0)
                {
                    arr[j]=true;
                    cnt++;
                    break;
                }
            }
        }
    }
    cout<<cnt;
}