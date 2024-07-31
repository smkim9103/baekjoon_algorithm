#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
  int n,v;
  cin>>n;
  int arr[n];
  int cnt=0;
  for(int i=1;i<=n;i++)
    {
      cin>>arr[i];
    }
  cin>>v;
  for(int i=1;i<=n;i++)
    {
      if(arr[i]==v)
      {
        cnt++;
      }
    }
  cout<<cnt;
}