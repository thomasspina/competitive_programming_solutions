// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1241

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int f; scanf("%d", &f);

        int sum = 0;
        for (int j = 0; j < f; j++) {
            int s; int a; int e;
            scanf("%d %d %d", &s, &a, &e);

            sum += s * e;
        }

        printf("%d\n", sum);
    }
    
    return 0;
}
