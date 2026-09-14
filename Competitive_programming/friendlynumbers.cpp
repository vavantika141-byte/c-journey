#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    int s=0;
    while(n>0){
        s=s+n%10;
        n=n/10;
    }
    return s;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int ans=0;
        for(int y=x; y<=x+100; y++){
            if(y-sum(y)==x){
                ans++;
            }
        }
    
        cout<<ans<<'\n';
    }
    return 0;
}