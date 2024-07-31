#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
  int n,m;
  int a,b,c;
  int* arr;
  cin>>n>>m;
  arr=new int[n];
  for(int i=0;i<n;i++)
    {
      arr[i]=0;
    }
  for(int i=0;i<m;i++)
    {
      cin>>a>>b>>c;
      for(int j=a;j<=b;j++)
        {
          arr[j-1]=c;
        }
    }
  for(int j=0;j<n;j++)
    {
      cout<<arr[j]<<" ";
    }
}