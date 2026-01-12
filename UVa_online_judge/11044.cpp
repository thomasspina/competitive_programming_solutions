#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n; int m;
        scanf("%d %d", &n, &m);

        double a = ceil((n - 2) / 3.0) * ceil((m - 2) / 3.0);
        printf("%d\n", (int) a);
    }

    return 0;
}
