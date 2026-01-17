// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2307

#include <bits/stdc++.h>

using namespace std; 

int main() {
    int n;
    while (scanf("%d", &n)) {
        if (n == 0) break;
        
        while (n > 9) {
            string s = to_string(n);
            int sum = 0;

            for (int i = 0; i < s.size(); i++) {
                sum += s[i] - '0';
            }

            n = sum;
        }

        printf("%d\n", n);
    }
    
    return 0;
}
