//6198
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    ll h, ans = 0;
    stack<int> S;
    while (n--){
        cin >> h;
        while (!S.empty() && S.top() <= h) S.pop();
        ans += S.size();
        S.push(h);
    }
    cout << ans;
}

// 스택에 뭘 넣어야되는지 파악하는게 급선무..
// 이문제는 내려다보는게 아니라 올려다보는식으로 접근해야함

// 10 3 7 4 12 2

// 10
// 10 3
// 10 7 (ans = 1)
// 10 7 4
// 12 (ans = 1+3)
// - (ans = 1+3+1)
