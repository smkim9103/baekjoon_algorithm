#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;


int main(){
    int n;
    int arr[1001] = {0,};
    cin >> n;
    int a[n], b[n];
    int ans = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                continue;
            }
            for(int k = a[j]; k < b[j]; k++)
            {
                arr[k] = 1;
            }
        }
        for(int k = 0; k < 1001; k++)
        {
            cnt = arr[k] + cnt;
            arr[k] = 0;
        }
        if(cnt > ans)
        {
            ans = cnt;
        }
        cnt=0;
    }
    cout << ans;
}
