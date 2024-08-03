#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
  int max=0,max1;
  int arr[9];
  
  for(int i=0;i<9;i++)
    {
      cin>>arr[i];
      if(arr[i]>max)
      {
        max=arr[i];
        max1=i+1;
      }
    }
  cout<<max<<endl<<max1;
}