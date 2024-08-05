#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
  int a,b,c;
  cin>>a;

  for(int i=0;i<a;i++)
    {
      cin>>b>>c;
      cout<<b+c<<endl;
      b=0;
      c=0;
    }
}