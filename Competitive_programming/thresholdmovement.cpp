#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long oddMin = 1e18;
        long long evenMax = 0;
        for(int i=1; i<=n; i++){
            long long x;
            cin>>x;
            if(i%2==1)
                oddMin = min(oddMin, x);
            else
                evenMax = max(evenMax, x);
        }
        if(n%2 == 0 && evenMax+1 < oddMin)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}


