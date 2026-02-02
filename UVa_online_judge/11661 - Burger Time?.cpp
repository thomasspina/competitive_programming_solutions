// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2708

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 

    while (scanf("%d", &n)) {
        if (n == 0) break;

        char c;
        int minDist = INT_MAX;
        int D = -1, R = -1;
        cin.ignore();

        for (int i = 0; i < n; i++) {
            c = getchar();

            if (c == 'Z') {
                minDist = 0;
                cin.ignore(INT_MAX, '\n');
                cin.putback('\n');
                break;
            } else if (c == 'D') {
                D = i;

                if (R != -1) {
                    minDist = min(minDist, D - R);
                }
            } else if (c == 'R') {
                R = i;

                if (D != -1) {
                    minDist = min(minDist, R - D);
                }
            }
        }

        cin.ignore();
        printf("%d\n", minDist);
    }

    return 0;
}
