// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3794

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int l; int w; int h; scanf("%d %d %d", &l, &w, &h);
        string ans = "good";
        if (l > 20 || w > 20 || h > 20) {
            ans = "bad";
        }

        printf("Case %d: %s\n", i, ans.c_str());
    }
    
    return 0;
}
