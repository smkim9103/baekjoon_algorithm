#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
  int n,m,i,j,s;
  cin>>n>>m;
  int arr[100];
  int temp[100];

  for(int a=1;a<=n;a++)
    {
      arr[a]=a;
    }

  for(int a=1;a<=m;a++)
    {
      cin>>i>>j;
      s=1;
      for(int b=j;b>=i;b--)
        {
          temp[s]=arr[b];
          s++;
        }
      s=1;
      for(int b=i;b<=j;b++)
        {
          arr[b]=temp[s];
          s++;
        }
      s=1;
    }
  for(int a=1;a<=n;a++)
    {
      cout<<arr[a]<<" ";
    }
}