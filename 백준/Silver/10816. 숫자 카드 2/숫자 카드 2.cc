// 10816
#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[500002];

int lower(int k, int len){
    int sp = 0, cp, ep = len;
    while (sp < ep){
        cp = (sp + ep) / 2;
        if (a[cp] >= k) ep = cp; // >= 주의
        else sp = cp + 1;
    }
    return sp;
}

int upper(int k, int len){
    int sp = 0, cp, ep = len;
    while (sp < ep){
        cp = (sp + ep) / 2;
        if (a[cp] > k) ep = cp; // > 주의
        else sp = cp + 1;
    }
    return sp;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    
    cin >> m;
    int k;
    while (m--){
        cin >> k;
        cout << upper(k,n)-lower(k,n) << ' ';
    }
}
