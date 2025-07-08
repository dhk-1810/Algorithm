// 1920
#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[100005];

int bs(int k){
    int sp = 0, cp, ep = n-1; // 앞, 중간, 끝
    while (sp <= ep){
        cp = (ep + sp) / 2;
        if (a[cp] > k) ep = cp - 1; // 1을 뺄건지
        else if (a[cp] < k) sp = cp + 1; // 더할건지에 주의할것.
        else return 1; // 값을 찾으면 1 리턴
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    cin >> m;
    
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        cout << bs(a) << '\n';
    }
}
