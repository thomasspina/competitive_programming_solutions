// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1904

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    bool f = true;
    while (t--) {
        cin.ignore(); cin.ignore();

        int w; cin >> w;

        int gap = -1; bool canClose = true;
        while (w--) {
            int n; int s;
            cin >> n; cin >> s;

            if (gap == -1) {
                gap = abs(n - s);
            } else if (canClose && gap != abs(n - s)) {
                canClose = false;
            }
        }
        if (!f) cout << "\n";
        f = false;

        if (canClose) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }

    return 0;
}
