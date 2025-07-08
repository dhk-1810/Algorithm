// 1931
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){ // 최대공약수.
    if (a == 0) return b; // 최소공배수를 구하는 용도로만 사용됨.
    return gcd(b % a, a);
}

int lcm(int a, int b){ // 최소공약수.
    return a / gcd(a, b) * b;
}

int func(int m, int n, int x, int y){
    if (m == x) x = 0;
    if (n == y) y = 0;
    int l = lcm(m, n); // lcm을 매번 호출하지 않고 변수에 담아서 사용.
    for (int i = x; i <= l; i += m){ // m으로 나눈 나머지를 가준삼아 for문 돌림
        if (i == 0) continue;
        if (i % n == y) return i;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t, m, n, x, y;
    cin >> t;
    while (t--){
        cin >> m >> n >> x >> y;
        cout << func(m, n, x, y) << '\n';
    }
}

// 덧셈으로 접근하려고 하면 안됨..
