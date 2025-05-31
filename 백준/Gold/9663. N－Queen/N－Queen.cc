#include <bits/stdc++.h>
using namespace std;

bool isused1[40];
bool isused2[40];
bool isused3[40];

int cnt = 0;
int n;

void func(int cur){
    if (cur == n){ // n개의 퀸을 모두 놓은 경우
        cnt++;
        return;
    }
    
    for (int i = 0; i < n; i++){
        if (isused1[i] || isused2[i+cur] || isused3[cur-i+n-1]) continue;
        
        isused1[i] = 1;
        isused2[i+cur] = 1;
        isused3[cur-i + n-1] = 1; // 배열 인덱스로는 음수를 사용할 수 없으니 n-1을 더해서 항상 양수로 만들음.
        func(cur+1);
        isused1[i] = 0;
        isused2[i+cur] = 0;
        isused3[cur-i + n-1] = 0;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    func(0);
    cout << cnt;
}
