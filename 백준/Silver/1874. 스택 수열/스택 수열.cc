#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    stack<int> S;
    int k = 1;
    string ans;
    while (n--){
        int t;
        cin >> t;
        while (k <= t) {
            S.push(k++);
            ans += "+\n";
        }
        if (S.top() != t) {
            cout << "NO\n";
            return 0;
        }
        S.pop();
        ans += "-\n";
    }
    cout << ans;
}
