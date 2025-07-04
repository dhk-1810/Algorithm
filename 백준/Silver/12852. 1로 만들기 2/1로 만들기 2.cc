// 12852
#include <bits/stdc++.h>
using namespace std;

int n;
int d[1000005];
int a[1000005]; // 경로 담는 배열

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    
    d[1] = 0;
    for (int i = 2; i <= n; i++){
        d[i] = d[i-1] + 1; // 1 뺀다고 가정
        a[i] = i-1; // 마찬가지
        if (i % 2 == 0 && d[i] > d[i/2] + 1){
            d[i] = d[i/2] + 1;
            a[i] = i/2;
        }
        if (i % 3 == 0 && d[i] > d[i/3] + 1){
            d[i] = d[i/3] + 1;
            a[i] = i/3;
        }
    }
    cout << d[n] << '\n';
    while (1){
        cout << n << ' ';
        if (n == 1) break;
        n = a[n];
    }
}
