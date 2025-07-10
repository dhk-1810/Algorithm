// 18870
#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000002];
vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    // unique로 중복제거하고, erase로 뒤에 쓰래기값 제거
    // erase(시작점, 종료점). unique는 쓰래기값 시작위치 반환함.
    for (int i = 0; i < n; i++)
        cout << lower_bound(v.begin(), v.end(), a[i]) - v.begin() << ' ';
        // lower_bound(시작점, 종료점, key값). key값보다 같거나 큰 숫자가 배열 몇번째에서 나오는지 반환.
        // 반환값이 주소이므로 시작주소를 빼줘야 함.
}
