#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        vector<int> a(n);
        for (auto &x : a) scanf("%d", &x);
       
        vector<int> dp(n, 1);
        int best = 1;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < i; j++){
                if (a[j] <= a[i]) dp[i] = max(dp[i], dp[j] + 1);
            }
            best = max(best, dp[i]);
        }
        printf("%d\n", best);
    }
}