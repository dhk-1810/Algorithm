// 2217
#include <bits/stdc++.h>
using namespace std;

int n;
int a[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    
    int ans = 0;
    for (int i = 1; i <= n; i++) // 선택하는 개수
        if (a[n-i] * i > ans) ans = a[n-i] * i;
        // ans = max(ans, a[n-i]*i; 와 같음.
    cout << ans << '\n';
}
