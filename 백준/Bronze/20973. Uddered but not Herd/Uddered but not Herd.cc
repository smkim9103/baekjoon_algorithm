#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;


int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    string a,b; 
    cin>>a>>b;
    int cnt=1;
    int ind=0;

    for(int i=0;;i++)
    {
        if(ind==b.size())
        {
            break;
        }
        if(i==a.size())
        {
            i=0;
            cnt++;
        }
        if(a[i]==b[ind])
        {
            ind++;
        }
    }
    cout<<cnt;
}