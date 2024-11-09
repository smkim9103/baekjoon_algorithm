#include <bits/stdc++.h>
using namespace std;
 
int N, K, ranking[11][21];
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    cin >> K >> N;
    for(int i = 0; i < K; i++)
        for(int j = 0; j < N; j++) {
        int r;
        cin >> r;
        ranking[i][r] = j;
    }
 
    int ans = 0;
    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= N; j++) {
            if(i == j) continue;
            bool ok = true;
            for(int k = 0; k < K; k++) {
if(ranking[k][i] > ranking[k][j]) ok = false;
        }
        if(ok) ans++;
    }
 
    cout << ans << '\n';
    return 0;
}