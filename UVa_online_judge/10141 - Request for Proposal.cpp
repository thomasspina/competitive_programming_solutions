// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1082

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p, rMet, bMet, k = 1;
    double rPrice, bPrice;
    string temp, best, junk, seperator = "";

    while (scanf("%d %d", &n, &p), n) {
        cout << seperator;
        seperator = "\n";
        cin.ignore();
        bPrice = numeric_limits<double>::max();
        bMet = -1;


        for (int i = 0; i < n; i++) getline(cin, junk);

        while (p--) {
            getline(cin, temp);
            scanf("%lf %d", &rPrice, &rMet);
            cin.ignore();

            for (int i = 0; i < rMet; i++) getline(cin, junk);

            if (rMet > bMet || (rMet == bMet && rPrice < bPrice)) {
                bMet = rMet;
                bPrice = rPrice;
                best = temp;
            }
        }

        printf("RFP #%d\n%s\n", k++, best.c_str());
    }


    return 0;
}
