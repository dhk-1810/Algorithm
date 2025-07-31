#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;
    list<char> L;
    for (auto c : s) L.push_back(c);
    auto cursor = L.end();
    
    int m;
    cin >> m;
    
    while (m--){
        char c;
        cin >> c;
        switch (c) {
            case 'L':
                if (cursor != L.begin()) cursor--;
                break;
            case 'D':
                if (cursor != L.end()) cursor++;
                break;
            case 'B':
                if (cursor != L.begin()){
                    cursor--;
                    cursor = L.erase(cursor);
                }
                break;
            case 'P':
                char add;
                cin >> add;
                L.insert(cursor, add);
        }
    }
    for (auto c: L) cout << c;
}
