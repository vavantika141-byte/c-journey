#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,H,M;
        cin>>n>>H>>M;
        int bed= H*60+M;
        int best=INT_MAX;
        for(int i=0; i<n;i++){
            int h,m;
            cin>>h>>m;
            int alarm=h*60 + m;
            int diff = alarm - bed;
            if (diff<0) diff += 24 * 60;
            best = min(best, diff);
        }
        cout<<best/60<<" "<<best%60<<"\n";
    }
    return 0;
}