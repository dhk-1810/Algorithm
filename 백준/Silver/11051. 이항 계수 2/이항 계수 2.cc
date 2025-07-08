// 11050
#include <bits/stdc++.h>
using namespace std;

int d[1002][1002];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 1; i <= 1000; i++){
        d[i][0] = 1;
        d[i][i] = 1;
        for (int j = 1; j < i; j++)
            d[i][j] = (d[i-1][j-1] + d[i-1][j]) % 10007; 
    }
    int n, k;
    cin >> n >> k;
    cout << d[n][k] << '\n';
}
