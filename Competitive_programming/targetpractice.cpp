#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while (t--) {
        int total = 0;
        for (int i = 0; i < 10; i++) {
            char row[16];
            scanf("%s", row);
            for (int j = 0; j < 10; j++) {
                if (row[j] == 'X') {
                    total += min(min(i, j), min(9 - i, 9 - j)) + 1;
                }
            }
        }
        printf("%d\n", total);
    }
    return 0;
}