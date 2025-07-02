// 9095
#include <bits/stdc++.h>
using namespace std;

int t;
int d[11];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    d[1] = 1; // 1, 2, 3으로 1을 나타내는 방법 수는 1개뿐.
    d[2] = 2;
    d[3] = 4;
    
    for (int i = 4; i < 11; i++)
        d[i] = d[i-1] + d[i-2] + d[i-3];
        
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << d[n] << '\n';
    }
}
