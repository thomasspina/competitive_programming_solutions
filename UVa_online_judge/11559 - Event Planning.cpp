// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2595

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; int b; int h; int w;
    while (scanf("%d %d %d %d", &n, &b, &h, &w) == 4) {

        bool found = false;
        int minCost = INT_MAX;
        for (int i = 0; i < h; i++) {
            int p; scanf("%d", &p);
            
            
            int maxRooms = -1;
            for (int j = 0; j < w; j++) {
                int r; scanf("%d", &r);
                maxRooms = max(r, maxRooms);
            }

            if (maxRooms >= n && b >= p*n) {
                found = true;
                minCost = min(minCost, p*n);
            }
        }

        if (found) {
            printf("%d\n", minCost);
        } else {
            printf("stay home\n");
        }

    }

    return 0;
}
