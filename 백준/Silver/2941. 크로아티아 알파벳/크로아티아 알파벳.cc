#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
    string n;
    cin>>n;
    int cnt=0;

    for(int i=0;i<n.size();i++)
    {
        if(i+2<n.size() && n[i]=='d' && n[i+1]=='z' && n[i+2]=='=')
        {
            cnt++;
            i+=2;
        }
        else if(i+1<n.size() && ((n[i] == 'c' && (n[i+1] =='=' || n[i+1]=='-')) || (n[i]=='d' && n[i+1]=='-') || (n[i]=='l' && n[i+1]=='j') || (n[i]=='n' && n[i+1]=='j') || (n[i]=='s' && n[i+1]=='=') || (n[i]=='z' && n[i+1] =='=')))
        {
            cnt++;
            i++;
        }
        else
        {
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}