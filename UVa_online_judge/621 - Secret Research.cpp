// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=562

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        int ss = s.size();

        if (s == "1" || s == "4" || s == "78") {
            cout << "+\n";
        } else if (ss >= 2 && s[ss - 2] == '3' && s[ss - 1] == '5') {
            cout << "-\n";
        } else if (ss >= 2 && s[0] == '9' && s[ss - 1] == '4') {
            cout << "*\n";
        } else if (ss >= 3 && s[0] == '1' && s[1] == '9' && s[2] == '0') {
            cout << "?\n";
        }
    }
    
    return 0;
}
