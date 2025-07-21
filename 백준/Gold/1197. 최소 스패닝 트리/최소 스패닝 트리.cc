// 1197
#include <bits/stdc++.h>
using namespace std;

vector<int> p(10005, -1); // -1로 초기화

int find(int x){ // x의 root를 반환해줌.
    if (p[x] < 0) return x; // p[x]가 root인 경우.
    return p[x] = find(p[x]); // 재귀로 root 찾고 p[x]를 업데이트
}

bool is_diff_group(int u, int v){
    u = find(u); // 루트 찾기
    v = find(v);
    if (u == v) return 0; // 같은그룹이면 false 반환
    if (p[u] == p[v]) p[u]--; // 크기 같은 경우 u를 root로 정하고 크기 증가시킴
    if (p[u] < p[v]) p[v] = u; // 둘 중 큰 쪽이 작은쪽을 흡수
    else p[u] = v;
    return 1;
}

int v, e;
tuple<int,int,int> edge[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> v >> e;
    
    for (int i = 0; i < e; i++){
        int a, b, cost;
        cin >> a >> b >> cost;
        edge[i] = {cost, a, b};
    }
    
    sort(edge, edge + e); // cost순으로 정렬
    int cnt = 0, ans = 0;
    for (int i = 0; i < e; i++){
        int a, b, cost;
        tie(cost, a, b) = edge[i];
        if (!is_diff_group(a, b)) continue; // 같은 그룹이면 continue
        ans += cost;
        cnt++;
        if (cnt == v-1) break;
    }
    cout << ans;
}
