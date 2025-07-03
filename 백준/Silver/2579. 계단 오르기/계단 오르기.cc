// 2579
#include <bits/stdc++.h>
using namespace std;

int n;
int st[302]; // 계단에 적힌 점수
int d[3][302]; // [인접계단 연속 이동 횟수] [각 계단에서 얻는 최댓값]

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> st[i];
    
    if (n == 1) { // 예외처리
        cout << st[1];
        return 0;
    }
    
    d[1][1] = st[1]; // 한 번 이동(1계단)
    d[2][1] = 0; // 두 칸 연속 이동(1계단) - 불가능하므로 0.
    d[1][2] = st[2]; // 한 번 이동(2계단)
    d[2][2] = st[1] + st[2]; // 두 칸 연속 이동(2계단)
    
    for (int i = 3; i <= n; i++){
        d[1][i] = max(d[1][i-2], d[2][i-2]) + st[i]; // max(한 번 이동으로 두칸 오를때 합, 두 칸 연속 이동으로 두칸 오를 떄 합) + 지금 칸 점수
        d[2][i] = d[1][i-1] + st[i]; // 두 칸 연속 이동하는 경우. 한칸 이동 + 지금 칸 점수
    }
    
    cout << max(d[1][n], d[2][n]) << '\n';
}
