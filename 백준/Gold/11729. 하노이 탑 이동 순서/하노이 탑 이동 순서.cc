#include <bits/stdc++.h>
using namespace std;

void hanoi(int a, int b, int n){
    if (n == 1) { // n번째 장대에 원판이 하나만 남으면 종료.
        cout << a << ' ' << b << '\n';
        return;
    }
    hanoi(a, 6-a-b, n-1); // n-1개를 1 -> 2로 옮김
    cout << a << ' ' << b << '\n';
    hanoi(6-a-b, b, n-1); // n-1개를 2 -> 3으로 옮김
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int k;
    cin >> k;
    cout << (1<<k)-1 << '\n';
    hanoi(1, 3, k);
}