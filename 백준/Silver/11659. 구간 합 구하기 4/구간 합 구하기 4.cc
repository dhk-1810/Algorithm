// 11659
#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[100005];
int d[100005]; // k번쨰 수까지 합

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    
    d[1] = a[1];
    
    for (int i = 2; i <= n; i++)
        d[i] = d[i-1] + a[i];
    
    while (m--){
        int i, j;
        cin >> i >> j;
        cout << d[j] - d[i-1] << '\n';
    }
}
