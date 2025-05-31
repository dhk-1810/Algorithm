#include <bits/stdc++.h>
using namespace std;

int n, s;
int arr[30]; // 집합 원소들을 입력받을 배열
int cnt = 0;

void func(int cur, int sum){
    if (cur == n){
        if (sum == s) cnt++;
        return;
    }
    func(cur+1, sum); // 현재 원소 선택 X
    func(cur+1, sum+arr[cur]); // 현재 원소 선택
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> s;
    
    for (int i = 0; i < n; i++) cin >> arr[i];
    func(0, 0);
    if (s == 0) cnt--; // 공집합인 경우의 수 1 차감
    cout << cnt;
}
