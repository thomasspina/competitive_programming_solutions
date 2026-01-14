// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2349

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n; scanf("%d", &n);

        int maxDist = INT_MIN;
        int minDist = INT_MAX;

        for (int j = 0; j < n; j++) {
            int x; scanf("%d", &x);
            
            maxDist = max(x, maxDist);
            minDist = min(x, minDist);
        }

        printf("%d\n", 2 * (maxDist - minDist));
    }
    
    return 0;
}
