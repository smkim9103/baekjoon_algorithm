#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
  int a,b,c;
  int total=0;
  cin>>a>>b>>c;
  
  if(a==b && b==c)
  {
    total=10000+a*1000;
  }
  
  else if(a==b && b!=c)
  {
    total=1000+a*100;
  }

  else if(a==c && c!=b)
  {
    total=1000+a*100;
  }

  else if(c==b && b!=a)
  {
    total=1000+b*100;
  } 
  
  else if(a!=b && b!=c && c!=a)
  {
      if(a>b && a>c)
      {
          total=a*100;
      }
      else if(b>a && b>c)
      {
          total=b*100;
      }
      else if(c>a && c>b)
      {
          total=c*100;
      }
  }

  cout<<total;
}