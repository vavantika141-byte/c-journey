#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long a;
        cin>>n>>a;
        int left = 0;
        int right = 0;
        for(int i=0; i<n; i++){
            long long v;
            cin>>v;
            if(v<a){
                left++;
            }
            else if(v>a){
                right++;
            }
        }
        if(left>right){
            cout<<a-1<<endl;
        }
        else{
            cout<<a+1<<endl;
        }
    }
    return 0;
}