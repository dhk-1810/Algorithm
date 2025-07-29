// 2309
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr1[9], arr2[7];
    int sum, i, j;
    for (int i = 0; i < 9; i++) {
        cin >> arr1[i];
    }
    
    // 포함 안시킬 두명 골라서 합 체크
    for (i = 0; i < 8; i++){
        for (j = i + 1; j < 9; j++){
            sum = 0;
            for (int k = 0; k < 9; k++){
                if (k == i || k == j) continue;
                sum += arr1[k];
            }
            if (sum == 100) break;
        }
        if (sum == 100) break;
    }
    
    // arr2에 담음
    for (int n = 0, m = 0; n < 9; n++){
        if (n == i || n == j) continue;
        arr2[m] = arr1[n];
        m++;
    }
    
    // 정렬, 출력
    sort(arr2, arr2 + 7);
    for (int I = 0; I < 7; I++){
        cout << arr2[I] << '\n';
    }
}
