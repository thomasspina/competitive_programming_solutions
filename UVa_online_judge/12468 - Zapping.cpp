// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3912

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a; int b;
    while(scanf("%d %d", &a, &b)) {
        if (a == -1) return 0;

        int numPresses = (b - a + 100) % 100;
        if (numPresses > 50) {
            numPresses = 100 - numPresses;
        }

        printf("%d\n", numPresses);
    }

    return 0;
}
