// 2230 - 이분탐색
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
    
    int ans = 2100000000;
    for (int i = 0; i < n; i++) {
        int target = a[i] + m;
        int idx = lower_bound(a, a + n, target) - a;
        if (idx < n) ans = min(ans, a[idx] - a[i]);
    }
        
    cout << ans << '\n';
}
