#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p[105];
    for(int i=1; i<=n;i++){
        cin>>p[i];
    }
    int ans[105];
    for(int i=1; i<=n; i++){
        int r=p[i];
        ans[r]=i;
    }
    for(int i=1; i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
return 0;
}