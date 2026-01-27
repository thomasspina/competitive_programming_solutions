// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1265

#include <bits/stdc++.h>

using namespace std;

int main() {
    int k = 1;
    string s;

    while (getline(cin, s)) {
        if (s.empty()) break;

        int n; scanf("%d", &n);
        int i, j;

        printf("Case %d:\n", k++);
        
        for (int q = 0; q < n; q++) {
            scanf("%d %d", &i, &j);
            if (i > j) swap(i, j);

            bool same = true;
            for (int c = i; c < j; c++) {
                if (s[c] != s[c + 1]) {
                    same = false;
                    break;
                }
            }

            if (same) 
                printf("Yes\n");
            else 
                printf("No\n");
        }

        cin.ignore();
    }

    return 0;
}
