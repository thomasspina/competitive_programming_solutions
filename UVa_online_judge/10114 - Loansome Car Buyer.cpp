// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1055

#include <bits/stdc++.h>
using namespace std;

int main() {
    int dur;
    double down;
    double loan;
    int n;
    
    while(scanf("%d %lf %lf %d", &dur, &down, &loan, &n) == 4) {
        if (dur < 0) return 0;
        
        double monthly = loan / dur;
        double carVal = loan + down;

        vector<pair<int, double>> depr(n);
        for (int i = 0; i < n; i++) {
            scanf("%d %lf", &depr[i].first, &depr[i].second);
        }

        carVal *= 1 - depr[0].second;
        
        int months = -1; if (loan < carVal) { months = 0; }
        int dI = 0;

        for (int m = 1; m <= dur && months == -1; m++) {
            if (dI + 1 < n && depr[dI + 1].first <= m) { dI++; }

            loan -= monthly;
            carVal *= (1 - depr[dI].second);

            if (loan < carVal) {
                months = m;
                break;
            }
        }
        

        if (months == 1) {
            printf("1 month\n");
        } else {
            printf("%d months\n", months);
        }
    }
    
    return 0;
}
