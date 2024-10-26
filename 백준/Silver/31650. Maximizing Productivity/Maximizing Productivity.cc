#include <iostream>
#include<cstdio>
#include<algorithm>
#define ll long long
using namespace std;

int main() {

    cin.tie(0);
    ios:: sync_with_stdio(0);

    // 농장, 쿼리 수 입력받음. 범위가 넓기 때문에 ll으로 선언
    ll n, q;
    cin >> n >> q;
    int c[n], t[n];

    // 농장 닫는 시간
    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }
    
    // 농장까지의 이동 시간
    for(int i = 0; i < n; i++) {
        cin >> t[i];
    }

    // 농장 닫는 시간에서 이동 시간을 빼서
    // 농장을 방문하기 위해 일어나야 하는 시간을 먼저계산
    int time[n];
    for(int i = 0; i < n; i++) {
        time[i] = c[i] - t[i] - 1;
    }

    // Array 정렬
    sort(time, time + n);

    while(q--) {
        int v, s;
        cin >> v >> s;
        int l = 0, r = n - 1, ans = 0;
        
        // 농장 수 계산 : Binary search 활용
        while(l <= r) {
            int mid = (l + r) / 2;
            if(time[mid] >= s) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        // l은 첫 번째로 S보다 큰 값의 인덱스를 의미
        // 방문할 수 없는 농장의 시작 !!
        ans = n - l; // l 이후의 모든 농장은 방문 가능

        // 방문 가능한 농장의 수가 V 이상인지 확인
        if(ans >= v) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}