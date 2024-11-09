#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    int t=0;
    
    vector<pair<int,int>> meet(n);
    for(int i=0;i<n;i++)
    {
        cin>>meet[i].first>>meet[i].second;
    }
    sort(meet.begin(),meet.end(),[](pair<int,int>a,pair<int,int>b)
    {
        if(a.second==b.second)
        {
            return a.first < b.first;
        }
        return a.second < b.second;
    });

    for(const auto& m:meet)
    {
        if(m.first>=t)
        {
            cnt++;
            t=m.second;
        }
    }

    cout<<cnt;
    return 0;
}