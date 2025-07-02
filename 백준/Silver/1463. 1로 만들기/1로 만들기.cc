// 1463
#include <bits/stdc++.h>
using namespace std;

int n;
int d[1000005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    d[1] = 0; // 연산 안해도 이미 1임. 따라서 0.
    for (int i = 2; i <= n; i++){
        d[i] = d[i-1] + 1; // -1 연산 가정. 횟수 증가.
        if (i%2 == 0) d[i] = min(d[i], d[i/2] + 1); // min(i를 구할때 연산횟수, i/2을 구할때 연산횟수)
        if (i%3 == 0) d[i] = min(d[i], d[i/3] + 1); // min(i를 구할때 연산횟수, i/3을 구할때 연산횟수)
    }
    cout << d[n];
}
