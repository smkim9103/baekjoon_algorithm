
#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
  int a;
  cin>>a;
  for(int i=0;i<a;i++)
    {
      for(int j=0;j<i;j++)
        {
          cout<<" ";
        }
      for(int j=0;j<a-i;j++)
        {
          cout<<"*";
        }
      cout<<endl;
    }
}