// 2295
#include <bits/stdc++.h>
using namespace std;

int n;
int a[1005];
vector<int> twoSum;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            twoSum.push_back(a[i] + a[j]);
    
    sort(twoSum.begin(), twoSum.end());
    for (int i = n-1; i > 0; i--){ 
        for (int j = 0; j < i; j++){
            if (binary_search(twoSum.begin(), twoSum.end(), a[i] - a[j])){
                cout << a[i];
                return 0; // 찾는 즉시 return함 (i를 감소시키면서 반복문 돌리므로)
            }
        }
    }
}
