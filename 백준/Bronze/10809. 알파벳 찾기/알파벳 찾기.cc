#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
   string a;
        int n;
        cin>>a;
        int arr[26];

        for(int i=0;i<26;i++)
            {
                arr[i]=-1;
            }
        
        for(int i=0;i<a.size();i++)
        {
            n=a[i]-'a';
            if(arr[n]==-1)
            {
                arr[n]=i;
            }
        }
        for(int i=0;i<26;i++)
            {
                cout<<arr[i]<<" ";
            }
    /*
    string a;
    cin>>a;
    int cnt=0;
    for(int i=0;i<a.size();i++)
        {
            if(a[i]==" ")
                cnt++;
        }
    cout<<cnt+1;
    */
}