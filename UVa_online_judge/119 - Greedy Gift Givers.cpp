// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=55

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; 
    bool first = true;
    
    while (cin >> n) {
        vector<string> names(n);
        vector<int> net(n, 0);
        unordered_map<string, int> idx;
        
        for (int i = 0; i < n; i++) { 
            cin >> names[i]; 
            idx[names[i]] = i;
        }
        
        for (int i = 0; i < n; i++) {
            string giver; 
            int money, ng;
            cin >> giver >> money >> ng;
            
            if (ng > 0) {
                int give = money / ng;
                int giverIdx = idx[giver];
                net[giverIdx] -= give * ng;
                
                for (int j = 0; j < ng; j++) {
                    string receiver; 
                    cin >> receiver;
                    net[idx[receiver]] += give;
                }
            }
        }
        
        if (!first) cout << "\n";
        first = false;
        
        for (int i = 0; i < n; i++) {
            cout << names[i] << " " << net[i] << "\n";
        }
    }
    
    return 0;
}
