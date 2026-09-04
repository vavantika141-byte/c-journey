#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
while(t--){
        int n;
        cin>>n;
        int h[5];
        for(int i=0;i<n;i++){
            cin>>h[i];
        }
        int mn=h[0];
        int mx=h[0];
        for(int i=1;i<n;i++){
            if(h[i]<mn){
                mn=h[i];
            }
            if(h[i]>mx){
                mx=h[i];
            }
        }
        cout<<mx-mn+1<<endl;
    }
return 0;
}