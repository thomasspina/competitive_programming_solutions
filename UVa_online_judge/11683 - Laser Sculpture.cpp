// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2730

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, c;

    while (scanf("%d %d", &a, &c) != EOF) {
        if (a == 0) break;

        cin.ignore();
        vector<int> h(c);
        for (int i = 0; i < c; i++) { scanf("%d", &h[i]); }
        cin.ignore();
        
        int count = a - h[0];

        // every new drop in height, those are new layers where the laser now needs to turn on
        for (int i = 1; i < c; i++) {
            if (h[i] < h[i - 1]) {
                count += h[i - 1] - h[i];
            }
        }

        printf("%d\n", count);
        
    }

    return 0;
}
