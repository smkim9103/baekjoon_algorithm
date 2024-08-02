#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
  int a,b,c;
  int total=0;
  cin>>a>>b>>c;
  total=a*60+b+c;
  a=total/60%24;
  b=total%60;
  cout<<a<<" "<<b;
  
}