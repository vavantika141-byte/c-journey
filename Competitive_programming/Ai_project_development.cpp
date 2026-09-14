#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x,y,z;
        cin>>n>>x>>y>>z;
        long long normal=(n + x + y - 1)/(x+y);  // brackets are essential
        long long ai;
        if(z*x>=n){
            ai=(n+x-1)/x;
        } 
        else {
            long long remaining=n-z*x;
            long long extra=(remaining+x+10*y-1) / (x+10*y);
            ai=z+extra;
        }
        cout<<min(normal, ai)<<'\n';
    }
    return 0;
}