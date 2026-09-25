#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long x, y;
        scanf("%lld %lld", &x, &y);
        long long s = x + 4*y;
        bool ok = false;
        if (((s % 3) + 3) % 3 == 0) {
            long long lo = max(0LL, y);
            if (6*lo <= s) ok = true;
        }
        printf(ok ? "YES\n" : "NO\n");
    }
}