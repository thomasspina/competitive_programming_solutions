// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1860

#include <bits/stdc++.h>

using namespace std;

int main() {

    int k, m, c, r;
    string s;
    while (scanf("%d %d", &k, &m) == 2) {
        unordered_set<string> fredCourses;
        while (k--) {
            cin >> s;
            fredCourses.insert(s);
        }
        cin.ignore();

        bool metReq = true;
        while(m--) {
            scanf("%d %d", &c, &r);

            while (c--) {
                cin >> s;

                if (metReq && fredCourses.find(s) != fredCourses.end()) {
                    r--;
                }
            }
            cin.ignore();

            if (r > 0) {
                metReq = false;
            }
        }

        if (metReq) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}
