// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=9

#include <bits/stdc++.h>

using namespace std; 

int main() {
    int t; scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int n; scanf("%d", &n);

        int nhigh = 0; int nlow = 0;
        
        int prev; scanf("%d", &prev);

        for (int j = 1; j < n; j++) {
            int h; scanf("%d", &h);
            if (h > prev) {
                nhigh++;
            } else if (h < prev) {
                nlow++;
            }

            prev = h;
        }

        printf("Case %d: %d %d\n", i, nhigh, nlow);
    }

    
    return 0;
}
