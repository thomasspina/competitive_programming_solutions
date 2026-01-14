// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2661

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main() {
    int t; scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        ull n; scanf("%llu", &n);

        // 1 + 2 + 3 + ... + k = [k * (k + 1)] / 2 = n. solve for k
        
        double r = (-1 + sqrt(1 + 8 * n)) / 2;
        
        printf("%d\n", (int) r);
    }

    return 0;
}
