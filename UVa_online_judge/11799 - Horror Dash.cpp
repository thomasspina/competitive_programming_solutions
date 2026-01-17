// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2899

#include <bits/stdc++.h>

using namespace std; 

int main() {
    int t; scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        
        int n; scanf("%d", &n);
        int maximum = INT_MIN;
        for (int j = 0; j < n; j++) {
            int x; scanf("%d", &x);
            maximum = max(x, maximum);
        }

        printf("Case %d: %d\n", i, maximum);
    }
    
    return 0;
}
