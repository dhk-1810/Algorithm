// 2230 - 투 포인터
#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    
    int mn = 2147483647;
    int en = 0;
    for (int st = 0; st < n; st++) {
        while (en < n && a[en] - a[st] < m) en++; // 차이가 m보다 작을때 en 이동.
        if (en == n) break;
        mn = min(mn, a[en] - a[st]);
    }
        
    cout << mn << '\n';
}
