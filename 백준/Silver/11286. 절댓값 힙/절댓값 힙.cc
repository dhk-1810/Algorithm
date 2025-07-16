// 1927
#include <bits/stdc++.h>
using namespace std;

class cmp {
public:
    bool operator() (int x, int y){ // 리턴값 true -> y가 우선, false -> x가 우선. 작은 값이 우선순위 높음.
        if (abs(x) != abs(y)) return abs(x) > abs(y); // 절댓값 다르면 비교결과 반환.
        else return x > 0 && y < 0; // 같으면 x가 음수일때 true 반환.
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    priority_queue<int, vector<int>, cmp> pq;
    int n;
    cin >> n;
    int x;
    while (n--){
        cin >> x;
        if (x != 0) pq.push(x);
        else {
            if (pq.empty()) cout << 0 << '\n';
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
    }
}
