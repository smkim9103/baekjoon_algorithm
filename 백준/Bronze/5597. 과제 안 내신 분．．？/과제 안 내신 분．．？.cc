#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
  int arr[31]={0};
  int temp;

  for (int i=0;i<28;i++)
    {
      cin>>temp;
      arr[temp]=1;
    }
  for(int i=1;i<=30;i++)
    {
      if(arr[i]!=1)
      {
        cout<<i<<endl;
      }
    }
}