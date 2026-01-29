// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2734

#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    while (getline(cin, s)) {
        if (s == "END") break;
        if (s == "1") {
            printf("1\n");
            continue;
        }



        int size = s.size();

        int i = 1;
        while (1) {
            int newSize = to_string(size).size();
            i++;

            if (size == newSize) {
                printf("%d\n", i);
                break;
            }

            size = newSize;
        }

    }

    return 0;
}
