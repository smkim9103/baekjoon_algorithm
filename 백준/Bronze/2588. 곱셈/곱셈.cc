
#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  int n3=a*(b%10);
  int n4=a*(b/10%10);
  int n5=a*(b/100%10);
  int n6=a*b;
  cout<<n3<<endl<<n4<<endl<<n5<<endl<<n6;
  return 0;
}