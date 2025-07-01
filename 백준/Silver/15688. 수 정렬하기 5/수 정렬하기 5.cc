// 15688
#include <bits/stdc++.h>
using namespace std;

int n;
int arr1[1000002]; // 양수와 0을 담는 배열
int arr2[1000002]; // 음수를 담는 배열

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    
    while (n--){
        int i;
        cin >> i;
        if (i >= 0) arr1[i]++;
        else arr2[-i]++;
    }
    
    for (int i = 1000001; i > 0; i--){
        if (arr2[i] == 0) continue;
        for (int j = 0; j < arr2[i]; j++)
            cout << -i << '\n';
    }
    
    for (int i = 0; i < 1000001; i++){
        if (arr1[i] == 0) continue;
        for (int j = 0; j < arr1[i]; j++)
            cout << i << '\n';
    }
}
