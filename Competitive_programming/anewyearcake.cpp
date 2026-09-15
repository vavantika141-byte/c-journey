#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        int ans=0;
        long long white=0, dark=0;
        long long layer=1;
        for(int i=0; ;i++){
            if(i%2==0)
                white=white+layer;
            else
                dark=dark+layer;
            if(white>a || dark>b)
                break;
            ans=i+1;
            layer=layer*2;
        }
        white=0;
        dark=0;
        layer=1;
        for(int i=0; ;i++){
            if(i%2==0)
                dark=dark+layer;
            else
                white=white+layer;
            if(white>a || dark>b)
                break;

            if(i+1>ans)
                ans=i+1;

            layer=layer*2;
        }
        cout<<ans<<'\n';
    }
    return 0;
}