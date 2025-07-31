#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000005];
int ans[1000005];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    
    stack<int> S;
    for (int i = n-1; i >= 0; i--){ // 여기
        while (!S.empty() && S.top() <= a[i]) S.pop();
        if (S.empty())
            ans[i] = -1; // 맨뒤 값의 오큰수는 항상 -1.
        else
            ans[i] = S.top();
        S.push(a[i]); // push.
    }
    for (int i = 0; i < n; i++) cout << ans[i] << ' ';
}

// for문을 뒤에서부터 돌리는 이유 : 이전에 이미 계산한 오큰수 결과들(스택)을 재사용
