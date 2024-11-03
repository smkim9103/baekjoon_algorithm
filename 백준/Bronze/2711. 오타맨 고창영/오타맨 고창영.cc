#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
    int t,a;
    string b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        for(int j=0;j<b.size();j++)
        {
            if(j!=a-1)
            {
                cout<<b[j];
            }
        }
        cout<<"\n";
    }
    return 0;
}