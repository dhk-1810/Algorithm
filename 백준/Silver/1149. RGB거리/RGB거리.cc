// 1149
#include <bits/stdc++.h>
using namespace std;

int n; // 집 개수
int cost[1002][4]; // 각 집을 각 색깔로 칠하는 비용. 1:R, 2:G, 3:B
int d[1002][4]; // k번 집 칠할때까지 최소 비용

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= 3; j++)
            cin >> cost[i][j];
    
    d[1][1] = cost[1][1];
    d[1][2] = cost[1][2];
    d[1][3] = cost[1][3];
    
    for (int i = 2; i <= n; i++){
        d[i][1] = min(d[i-1][2], d[i-1][3]) + cost[i][1];
        d[i][2] = min(d[i-1][1], d[i-1][3]) + cost[i][2];
        d[i][3] = min(d[i-1][1], d[i-1][2]) + cost[i][3];
    }
    cout << min({d[n][1], d[n][2], d[n][3]}) << '\n'; // 중괄호 주의
    
}
