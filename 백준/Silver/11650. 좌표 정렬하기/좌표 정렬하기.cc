#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int num;
    cin >> num ;
    
    pair<int, int> arr[num];
    for(auto& s : arr) cin >> s.first >> s.second;
    
    sort(arr, arr + num);
    
    for (auto s : arr) cout << s.first <<" "<<s.second<<"\n";
    
}