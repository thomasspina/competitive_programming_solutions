// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1365

#include <bits/stdc++.h>

using namespace std;

int singleDigitSum(int n) {
    if (n == 0) return 0;
    return 1 + (n - 1) % 9;
}

int main() {
    string n1, n2;
    int v1, v2;
    while (getline(cin, n1)) {
        if (n1.empty()) break;
        getline(cin, n2);
        v1 = 0; v2 = 0;

        for (char& c : n1) {
            if (c >= 'A' && c <= 'Z') {
                c = c - 'A' + 'a';
            }

            if (c >= 'a' && c <= 'z') {
                v1 += c - 'a' + 1;
            }
        }

        v1 = singleDigitSum(v1);

        for (char& c : n2) {
            if (c >= 'A' && c <= 'Z') {
                c = c - 'A' + 'a';
            }

            if (c >= 'a' && c <= 'z') {
                v2 += c - 'a' + 1;
            }
        }
        v2 = singleDigitSum(v2);

        double ratio = 100 * (double) min(v1, v2) / max(v1, v2);
        printf("%.2f %%\n", ratio);
    }

    return 0;
}
