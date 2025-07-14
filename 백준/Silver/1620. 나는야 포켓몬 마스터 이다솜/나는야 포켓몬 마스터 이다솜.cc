// 1620 - 해시
#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> s2i;
string i2s[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> i2s[i]; // 배열에 이름 저장
        s2i[i2s[i]] = i; // 집합에 인덱스 저장
    }
    
    while (m--){
        string query;
        cin >> query;
        if (isdigit(query[0])) cout << i2s[stoi(query)] << '\n'; // stoi로 형변환
        else cout << s2i[query] << '\n';
    }
}
