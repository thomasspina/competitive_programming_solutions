// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3166

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;

    for (int i = 1; i <= t; i++) {
        vector<string> v;
        int currHigh = 0;

        for (int j = 0; j < 10; j++) {
            string wp; cin >> wp;
            int score; cin >> score;

            if (score > currHigh) {
                v.clear();
                v.push_back(wp);
                currHigh = score;
            } else if (score == currHigh) {
                v.push_back(wp);
            }
        }
        
        cout << "Case #" << i << ":\n";
        for (int j = 0; j < v.size(); j++) {
            cout << v[j] << "\n";
        }
        
    }

    return 0;
}
