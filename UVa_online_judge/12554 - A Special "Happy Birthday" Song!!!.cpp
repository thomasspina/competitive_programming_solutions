// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3999

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    string song[16] = {
        "Happy", "birthday", "to", "you",
        "Happy", "birthday", "to", "you",
        "Happy", "birthday", "to", "Rujia",
        "Happy", "birthday", "to", "you"
    };
    vector<string> people(n, "");

    for (int i = 0; i < n; i++) { cin >> people[i]; }
    int si = 0;
    int pi = 0;

    while (pi < n) {
        cout << people[pi++] << ": " << song[si] << "\n";
        si = (si + 1) % 16;
    }

    pi = 0;
    while (si != 0 && si < 16) {
        cout << people[pi] << ": " << song[si++] << "\n";
        pi = (pi + 1) % n;
    }

    return 0;
}
