// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1491

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int a; int b; int c; int d;
    while (scanf("%d %d %d %d", &a, &b, &c, &d) == 4) {
        if (a == 0 && b == 0 && c == 0 && d == 0) break;

        // base 3 turns = 3 * 360 = 1080 degrees
        int ans = 1080;
        ans += (a - b + 40) % 40 * 9; // (... + 40) % 40 handles negative results and circles back around
        ans += (c - b + 40) % 40 * 9; // c - b because counter clockwise turn
        ans += (c - d + 40) % 40 * 9; // * 9 because 360 / 40 = 9

        printf("%d\n", ans);
    }
    
    return 0;
}
