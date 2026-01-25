// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=602

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; int m; int c;
    int i = 1;
    while (scanf("%d %d %d", &n, &m, &c) == 3) {
        if (n == 0 && m == 0 && c == 0) return 0;
        
        vector<int> devices(n);
        vector<int> turnedOn(n, false);
        for (int j = 0; j < n; j++) { scanf("%d", &devices[j]); }

        int current = 0; int maximum = 0; bool blown = false;

        for (int j = 0; j < m; j++) {
            int devI; scanf("%d", &devI);
            if (!turnedOn[devI - 1]) {
                turnedOn[devI - 1] = true;
                current += devices[devI - 1];
            } else {
                turnedOn[devI - 1] = false;
                current -= devices[devI - 1];
            }

            maximum = max(maximum, current);
            if (current > c) {
                blown = true;
            }
        }

        printf("Sequence %d\n", i++);

        if (blown) {
            printf("Fuse was blown.\n\n");
        } else {
            printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n\n", maximum);
        }
    }


    return 0;
}
