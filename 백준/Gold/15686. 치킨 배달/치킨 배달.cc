// 15686
#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, m;
int city[52][52];
vector<pair<int, int>> house;
vector<pair<int, int>> kfc;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> city[i][j];
            if (city[i][j] == 1) house.push_back({i, j});
            if (city[i][j] == 2) kfc.push_back({i, j});
        }
    }
    
    vector<int> brute(kfc.size(), 1); // 길이는 치킨집 개수, 1로 초기화.
    fill(brute.begin(), brute.begin() + kfc.size() - m, 0); // 치킨집 개수 - m개는 0, m개는 1로 채움. 뒤에서 next_perm.으로 조합 순회.
    int mn = 999999999;
    do {
        int dist = 0;
        for (auto h : house){
            int tmp = 999999999;
            for (int j = 0; j < kfc.size(); j++){
                if (brute[j] == 0) continue; // 선택 안된곳은 continue.
                tmp = min(tmp, abs(kfc[j].X - h.X) + abs(kfc[j].Y - h.Y)); // 최소 거리 계산
            }
            dist += tmp; // 치킨 거리
        }
        mn = min(mn, dist); // 최소 치킨 거리
    } while (next_permutation( brute.begin(), brute.end() )); // 조합 순회
    cout << mn << '\n';
}

// 최초 아이디어
// 각 치킨집은 치킨거리 합이 존재. 치킨거리 최대인 점포를 닫으면 됨. 치킨거리 합이 0이면 최우선 폐점
// x거리, y거리 절대값이 최소여야 치킨거리임. 더 크면 continue
