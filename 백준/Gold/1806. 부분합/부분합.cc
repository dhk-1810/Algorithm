// 1806 - 투 포인터
#include <bits/stdc++.h>
using namespace std;

int n, s;
int a[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> s;
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int mn = 2147483647, en = 0, sum = a[0];
    for (int st = 0; st < n; st++){
        while (en < n && sum < s) {
            en++;
            if (en != n) sum += a[en]; // en != n 조건 필요.
        }
        if (en == n) break;
        mn = min(mn, en - st + 1); // +1 주의
        sum -= a[st]; // sum 초기화
    }
    if (mn == 2147483647) mn = 0;
    cout << mn << '\n';
}
