#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair <int,int>> arr(n);
    
    for(auto&s : arr)
    {
        cin>>s.first>>s.second;
    }
    sort(arr.begin(),arr.end(),[](const pair<int,int> &a,const pair<int,int>&b)
    {
        if(a.second==b.second)
        {
            return a.first<b.first;
        }
        return a.second<b.second;
    });
    for(auto s: arr)
    {
        cout<<s.first<<" "<<s.second<<"\n";
    }
}