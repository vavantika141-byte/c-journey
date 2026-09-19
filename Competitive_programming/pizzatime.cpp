#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans=0;
        while(n>=3){
            long long eat=n/3;
            ans=ans+eat;
            n=n-2*eat;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
