// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3309

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; scanf("%d", &t);

    int n; int m; int j; int d;
    for (int i = 1; i <= t; i++) {
        m = 0; j = 0;
        scanf("%d", &n);

        while(n--) {
            scanf("%d", &d);

            m += 10 * ((d / 30) + 1);
            j += 15 * ((d / 60) + 1);
        }
        
        if (m < j) {
            printf("Case %d: Mile %d\n", i, m);
        } else if (m > j) {
            printf("Case %d: Juice %d\n", i, j);
        } else {
            printf("Case %d: Mile Juice %d\n", i, m);
        }
    }

    return 0;
}
