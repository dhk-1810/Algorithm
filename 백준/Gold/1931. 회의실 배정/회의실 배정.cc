// 1931
#include <bits/stdc++.h>
using namespace std;

int n;
pair<int, int> a[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> a[i].second >> a[i].first; // sort의 기준은 끝나는 시간이여야 함
    
    sort(a, a + n);
    int cnt = 0, t = 0;
    for (int i = 0; i < n; i++){
        if (t > a[i].second) continue;
        cnt++;
        t = a[i].first;
    }
    cout << cnt << '\n';
}
