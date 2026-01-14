// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2827

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int a; int b; int c;
        scanf("%d %d %d", &a, &b, &c);

        int ans = a + b + c - max({a, b, c}) - min({a, b, c});
        printf("Case %d: %d\n", i, ans);
    }
    
    return 0;
}
