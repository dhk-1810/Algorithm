// 11725
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> adj[100005]; // 벡터를 원소로하는 배열
int p[100005]; // 각 정점의 부모 정점을 담는 배열

void bfs(int cur){
    queue<int> q;
    q.push(cur);
    while (!q.empty()){
        int cur = q.front();
        q.pop();
        for (int nxt : adj[cur]) {
            if (p[cur] == nxt) continue;
            q.push(nxt);
            p[nxt] = cur;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    
    for (int i = 0; i < n-1; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    for (int i = 2; i <= n; i++) cout << p[i] << '\n';
}
