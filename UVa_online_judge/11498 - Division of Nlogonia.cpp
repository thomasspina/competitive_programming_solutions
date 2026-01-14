// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2493

#include <bits/stdc++.h>

using namespace std;

int main() {
    int k;
    while (scanf("%d", &k) == 1) {
        if (k == 0) break;

        int n; int m; scanf("%d %d", &n, &m);

        for (int i = 0; i < k; i++) {
            int x; int y; scanf("%d %d", &x, &y);

            if (x > n && y > m) {
                printf("NE\n");
            } else if (x > n && y < m) {
                printf("SE\n");
            } else if (x < n && y > m) {
                printf("NO\n");
            } else if (x < n && y < m) {
                printf("SO\n");
            } else {
                printf("divisa\n");
            }
        }
    }

    
    return 0;
}
