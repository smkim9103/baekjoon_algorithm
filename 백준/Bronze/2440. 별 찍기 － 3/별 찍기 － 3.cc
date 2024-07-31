
#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
  int a;
  cin>>a;
  for(int i=1;i<=a;i++)
    {
      for(int j=a-i;j>=0;j--)
        {
          cout<<"*";
        }
      cout<<endl;
    }
}