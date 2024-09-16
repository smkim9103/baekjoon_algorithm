#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    string n;
    cin>>n;

    sort(n.begin(),n.end(),greater<>());
    if(n[n.size()-1]!='0')
    {
        cout<<"-1";
    }
    else
    {
        long long sum=0;
        for(auto a:n)
        {
            sum+=a-'0'; 
        }
        if(sum%3==0)
        {
            cout<<n;
        }
        else
        {
            cout<<-1;
        }
    }
}
