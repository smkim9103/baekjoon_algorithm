#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
  int m,n,i,j,a;
  cin>>m>>n;
  int arr[m];

  for(int k=0;k<m;k++)
    {
      arr[k]=k+1;
    }
  for(int k=0;k<n;k++)
    {
      cin>>i>>j;
      a=arr[i-1];
      arr[i-1]=arr[j-1];
      arr[j-1]=a;
    }
  for(int k=0;k<m;k++)
    {
      cout<<arr[k]<<" ";
    }
}