// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2502

#include <bits/stdc++.h>

using namespace std;

// key is to do a finite state machine where dir is the current state
void newDir(string& dir, const string& bend) {  
    if (dir == "-x") {
        if (bend == "+y") dir = "-y";
        else if (bend == "-y") dir = "+y";
        else if (bend == "+z") dir = "-z";
        else if (bend == "-z") dir = "+z";

    } else if (dir == "+y") {
        if (bend == "+y") dir = "-x";
        else if (bend == "-y") dir = "+x";

    } else if (dir == "-y") {
        if (bend == "-y") dir = "-x";
        else if (bend == "+y") dir = "+x";

    } else if (dir == "+z") {
        if (bend == "-z") dir = "+x";
        else if (bend == "+z") dir = "-x";

    } else if (dir == "-z") {
        if (bend == "+z") dir = "+x";
        else if (bend == "-z") dir = "-x";
    
    } else {
        dir = bend;
    }
}

int main() {
    int n;
    string curr, s;
    while (scanf("%d", &n)) {
        if (n == 0) break;
        curr = "+x";

         
        for (int i = 0; i < n - 1; i++) {
            cin >> s; if (s[0] == 'N') continue;
            newDir(curr, s);
        }
        printf("%s\n", curr.c_str());
    }

    return 0;
}
