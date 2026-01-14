// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3834

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    int sum = 0;
    for (int i = 0; i < t; i++) {
        string s; cin >> s;
        if (s == "donate") {
            int x; cin >> x;
            sum += x;
        } else {
            cout << sum << "\n";
        }

    }
    
    return 0;
}
