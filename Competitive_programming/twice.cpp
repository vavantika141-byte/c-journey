#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count[21]={0};
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            count[x]++;
        }
        int ans=0;
        for(int i=1; i<=n; i++){
            ans=ans+count[i]/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}