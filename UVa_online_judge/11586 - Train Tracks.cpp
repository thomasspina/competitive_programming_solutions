// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2633

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; scanf("%d", &n);
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string s; getline(cin, s);
        
        int m = 0, f = 0;
        char c1, c2;
        for (int j = 0; j + 1 < s.size(); j += 3) {
            c1 = s[j]; c2 = s[j + 1];

            if (c1 == 'M') m++;
            else f++;

            if (c2 == 'M') m++;
            else f++;
        }

        if (m != f || m + f == 2) {
            printf("NO LOOP\n");
        } else {
            printf("LOOP\n");
        }
    }

    return 0;
}
