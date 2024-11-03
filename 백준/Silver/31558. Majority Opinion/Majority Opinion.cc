#include <bits/stdc++.h>

using namespace std;

long long t, n, h[1000000] = {0}, haycheck[1000000] = {0}, check = 0, flag = 0;

int main()
{
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        for(int j = 1; j <= n; j++) {
            cin >> h[j];
        }
       
        // hay 선호도 확인
        for(int j = 1; j <= n; j++) {
            // 다음, 혹은 그 다음에 오는 소와의 비교
            if(h[j] == h[j + 1] || h[j] == h[j + 2]) {
                // 아직 체크되지 않았으면
                if(haycheck[h[j]] == 0) {
                    haycheck[h[j]] = 1; // 체크 표시
                    check = 1; // flag 수정
                }
            }
        }

        // 체크된 건초 출력
        for(int j = 1; j <= n; j++) {
            if(haycheck[j] == 1) {
                if(flag == 1)
                    cout << " ";
                cout << j;
                flag = 1;  // flag 수정
            }
            h[j] = 0;
            haycheck[j] = 0;
        }

        // 체크된 건초가 없으면 -1 출력
        if(check == 0)
            cout << -1;
       
        check = 0; 
        flag = 0; 
        if(i != t - 1)
            cout << "\n";
    }
}
