#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        vector<long long> a(n);
        for (auto &x : a) scanf("%lld", &x);
        sort(a.rbegin(), a.rend()); 
        bool valid = true;
        for (int i = 0; i + 2 < n; i++){
            if (a[i] % a[i+1] != a[i+2]) { valid = false; break; }
        }
        if (valid) printf("%lld %lld\n", a[0], a[1]);
        else printf("-1\n");
    }
}