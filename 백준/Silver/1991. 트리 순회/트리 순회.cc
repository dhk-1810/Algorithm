// 1991
#include <bits/stdc++.h>
using namespace std;

int n;
int lc[30];
int rc[30];

void preorder(int cur){
    cout << char(cur+'A'-1);
    if (lc[cur] != 0) preorder(lc[cur]);
    if (rc[cur] != 0) preorder(rc[cur]);
}

void inorder(int cur){
    if (lc[cur] != 0) inorder(lc[cur]);
    cout << char(cur+'A'-1);
    if (rc[cur] != 0) inorder(rc[cur]);
}

void postorder(int cur){
    if (lc[cur] != 0) postorder(lc[cur]);
    if (rc[cur] != 0) postorder(rc[cur]);
    cout << char(cur+'A'-1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++){
        char node, l, r;
        cin >> node >> l >> r;
        if (l != '.') lc[node-'A'+1] = l-'A'+1; // 입력값을 인덱스로 써야하므로 문자를 숫자로 반환했다가 출력할땐 다시 문자로 반환
        if (r != '.') rc[node-'A'+1] = r-'A'+1; // 1-indexed 사용, 1 더함.
    } // 전역에 배열 선언해서 전부 0으로 초기화되므로 .이 들어올때 처리 필요 없음.
    
    preorder(1); cout << '\n';
    inorder(1); cout << '\n';
    postorder(1); cout << '\n';
}
