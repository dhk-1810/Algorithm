// 1026
#include <bits/stdc++.h>
using namespace std;

int n;
int a[100005], b[100005];

bool func(int a, int b){
    return a > b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    sort(a, a+n);
    sort(b, b+n, func);

    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += a[i] * b[i]; // func 정의 안하고 여기에서 인덱스만으로 역순 곱 할수도 있음.

    cout << ans << '\n';
}
