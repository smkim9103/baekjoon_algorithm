#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
  int a;
  int total=0;
  cin>>a;

  for(int i=1;i<=a;i++)
    {
      total=total+i;
    }
  cout<<total;
}