// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4022

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int i = 1;
    while (cin >> s) {
        if (s == "*") break;

        if (s == "Hajj") {
            cout << "Case " << i << ": Hajj-e-Akbar\n";
        } else {
            cout << "Case " << i << ": Hajj-e-Asghar\n";
        }

        i++;
    }
    
    return 0;
}
