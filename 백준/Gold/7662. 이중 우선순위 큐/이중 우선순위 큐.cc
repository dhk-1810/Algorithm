// 7662
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int k;
        cin >> k;
        multiset<int> ms;
        while (k--){
            char cmd;
            int n;
            cin >> cmd >> n;
            if (cmd == 'I') ms.insert(n);
            else {
                if (ms.empty()) continue; // ms가 비어있을때 erase 시도하면 런타임에러 발생.
                if (n == 1) ms.erase(prev(ms.end())); // 최댓값 삭제
                else ms.erase(ms.begin()); // 최솟값 삭제
            }
        }
        if (ms.empty()) cout << "EMPTY" << '\n';
        else {
            cout << *prev(ms.end()) << ' ' << *ms.begin() << '\n';
        }
    }
}
