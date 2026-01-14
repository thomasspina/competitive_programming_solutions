// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3710

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;

        if (s.size() == 5) {
            printf("%d\n", 3); continue;
        }

        if ((s[0] == 'o' && s[1] == 'n') ||
            (s[0] == 'o' && s[2] == 'e') ||
            (s[1] == 'n' && s[2] == 'e')) {

                printf("%d\n", 1); continue;
        }

        printf("%d\n", 2);
    }
    
    return 0;
}
