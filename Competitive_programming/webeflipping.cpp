#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int ans[n];
        int k=0;
        for(int i=n-1; i>=0; i--){
            if(a[i]>0){
                ans[k]=i+1;
                k++;
                for(int j=0; j<=i; j
                ++){
                    a[j]=-a[j];
                }
            }
        }
        cout<<k<<endl;
        for(int i=0; i<k; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
