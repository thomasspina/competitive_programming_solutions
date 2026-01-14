// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3431

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    int c = 1;
    while (scanf("%d", &n)) {
        if (n == 0) break;

        int sum = 0;
        int x;
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            if (x) {
                sum++;
            } else {
                sum--;
            }
        }

        printf("Case %d: %d\n", c, sum);
        c++;
    }
    
    
    return 0;
}
