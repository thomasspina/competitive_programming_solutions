// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=309311942 - Lumberjack Sequencing

#include <bits/stdc++.h>

using namespace std; 

int main() {
    int n; scanf("%d", &n);

    printf("Lumberjacks:\n");
    for (int i = 0; i < n; i++) {
        
        int arr[10] = {0};
        for (int j = 0; j < 10; j++) { scanf("%d", &arr[j]); }

        bool greater = arr[0] < arr[1];
        bool ordered = true;
        for (int j = 1; j < 9; j++) {
            if ((greater && arr[j] > arr[j + 1]) || 
                (!greater && arr[j] < arr[j + 1])) {
                ordered = false;
                break;
            }
        }
        
        if (ordered) {
            printf("Ordered\n");
        } else {
            printf("Unordered\n");
        }
    }
    
    return 0;
}
