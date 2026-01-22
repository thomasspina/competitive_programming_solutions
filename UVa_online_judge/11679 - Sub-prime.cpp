// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2726

#include <bits/stdc++.h>

using namespace std;

int main() {
    int b; int n; int d; int c; int v;
    while (scanf("%d %d", &b, &n)) {
        if (b == 0 && n == 0) return 0;

        vector<int> mr(b + 1);

        for (int i = 1; i <= b; i++) { scanf("%d", &mr[i]); }
        
        
        for (int i = 0; i < n; i++) {
            scanf("%d %d %d", &d, &c, &v);

            mr[d] -= v;
            mr[c] += v;
        }
        
        char s = 'S';
        for (int i = 1; i <= b; i++) {
            if (mr[i] < 0) {
                s = 'N';
                break;
            }
        }

        printf("%c\n", s);
    }

    return 0;
}
