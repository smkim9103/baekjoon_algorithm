#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    string seat;
    cin>>seat;

    int cnt=1;
    int i=0;

    while(i<n)
    {
        if (seat[i] == 'S')
        {
            cnt++;
            i++;
        } 
        else if(seat[i]=='L')
        {
            cnt++;
            i += 2;
        }
    }
    
    if(cnt<n)
    {
        cout<<cnt<<endl;
    }
    else
        cout<<n;
}