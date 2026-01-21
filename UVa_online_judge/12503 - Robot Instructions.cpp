// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3947

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cin.ignore();
        int p = 0;
        vector<int> prev;
        while (n--) {
            string s;
            getline(cin, s);

            if (s == "LEFT") {
                p--;
                prev.push_back(-1);
            } else if (s == "RIGHT") {
                p++;
                prev.push_back(1);
            } else {
                int i = stoi(s.substr(8)) - 1;
                p += prev[i];
                prev.push_back(prev[i]);
            }
        }


        cout << p << endl;

    }

    return 0;
}
