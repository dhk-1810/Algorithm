// 18808
#include <bits/stdc++.h>
using namespace std;

int n, m, k;
int arr[42][42];
int r, c;
int sticker[12][12];

// 붙일수 있는지 확인하는 함수 : true/false
bool pastable (int x, int y){
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (arr[x+i][y+j] == 1 && sticker[i][j] == 1)
                return false;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (sticker[i][j] == 1) arr[x+i][y+j] = 1;
                
    return true;
}

// 90도 회전 함수
void rotate(){
    int tmp[12][12];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            tmp[i][j] = sticker[i][j];
    
    for (int i = 0; i < c; i++)
        for (int j = 0; j < r; j++)
            sticker[i][j] = tmp[r-1-j][i];
    swap(r, c);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m >> k;
    
    while (k--){
        cin >> r >> c;
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> sticker[i][j];
        // 최대한 왼쪽 위에 붙일 수 있으면 붙이고
        // 안되면 돌려보고 그래도 안되면 버린다.
        for (int rt = 0; rt < 4; rt++){
            bool pasted = false;
            for (int x = 0; x <= n-r; x++){
                if (pasted) break;
                for (int y = 0; y <= m-c; y++){
                    if (pastable(x, y)){
                        pasted = true;
                        break;
                    }
                }
            }
            if (pasted) break;
            rotate();
        }
    }
    
    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (arr[i][j] == 1) ans++;
    cout << ans << '\n';
}
