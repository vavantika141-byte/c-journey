#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mn,mx;
        cin>>mn;
        mx = mn;
        for(int i=1; i<n; i++){
            int x;
            cin>>x;
            if(x<mn)
                mn=x;
            if(x>mx)
                mx=x;
        }
        cout<<(mx-mn+1)/2<<endl;
    }
return 0;
}