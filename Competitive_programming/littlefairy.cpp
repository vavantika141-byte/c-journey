#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int freq[1005]={0};
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            freq[x]++;
        }
        int distinct=0;
        for(int i=1; i<=1000; i++){
            if(freq[i]>0){
                distinct++;
            }
        }
        int answer=distinct;
        while(freq[answer]=0){
            answer++;
        }
        cout<<answer<<'\n';
    }
    return 0;
}