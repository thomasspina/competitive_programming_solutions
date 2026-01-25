// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=514

#include <bits/stdc++.h>

using namespace std;

int main() {
    double h; double u; int d; int f;

    while (scanf("%lf %lf %d %d", &h, &u, &d, &f) == 4) {
        if (h == 0) return 0;

        int days = 0;
        double prog = 0;
        double ff = u * (f / 100.0);
        do {
            prog += u;
            u -= ff;
            if (u < 0) u = 0;
            days++;

            if (prog > h) break;

            prog -= d;
        } while (prog >= 0);

        if (prog >= h) {
            printf("success on day %d\n", days);
        } else {
            printf("failure on day %d\n", days);
        }


    }


    return 0;
}
