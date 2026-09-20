#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int l, a, b;
        cin>>l>>a>>b;
        int ans = a;
        int cur = a;
        for(int i = 0; i < l; i++){
            cur = (cur + b) % l;
            ans = max(ans, cur);
        }
        cout << ans << '\n';
    }
    return 0;
}