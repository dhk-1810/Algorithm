// 1715
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (n--){
        int x;
        cin >> x;
        pq.push(x);
    }
    int ans = 0;
    while (pq.size() > 1){ // 그리디
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        ans += a + b; // 제일 작은거 두개를 뽑아내서 더함
        pq.push(a + b);
    }
    cout << ans << '\n';
}
