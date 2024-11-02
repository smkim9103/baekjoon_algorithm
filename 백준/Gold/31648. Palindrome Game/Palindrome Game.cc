#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
    int t;
    string a;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        if(a[a.size()-1]=='0')
        {
            cout<<"E\n";
        }
        else
        {
            cout<<"B\n";
        }
    }
    return 0;
}