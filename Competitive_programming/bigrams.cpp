#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int cnt2=0;
        bool possible=false;
        for(int i=0; i<k; i++){
            int c;
            cin>>c;
            if(c>=3)
                possible=true;
            if(c==2)
                cnt2++;
        }
        if(cnt2>=2)
            possible=true;
        cout<<(possible?"YES":"NO")<<'\n';
    }
    return 0;
}