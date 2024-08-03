#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
  int x,n,a,b;
  int total=0;
  cin>>x>>n;
  
  for(int i=1;i<=n;i++)
    {
      cin>>a>>b;
      total=total+a*b;
    }
  if(total==x)
  {
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }
}