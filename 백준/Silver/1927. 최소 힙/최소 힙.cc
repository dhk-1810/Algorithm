// 1927
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    priority_queue<unsigned int, vector<unsigned int>, greater<>> pq;
    int n;
    cin >> n;
    unsigned int x;
    while (n--){
        cin >> x;
        if (x > 0) pq.push(x);
        else {
            if (pq.empty()) cout << 0 << '\n';
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
    }
}
