#include<bits/stdc++.h>
using namespace std;
int main(){
    int qrTNum;
    cin>>qrTNum;
    while(qrTNum--){
        long long x,y;
        cin>>x>>y;
        long long s=x+y;
        long long a=x;
        for(int bit=62;bit>=0;bit--){
            if((x>>bit&1LL)&&!(s>>bit&1LL)){
                a=(x>>(bit+1))<<(bit+1);
                a|=(s&((1LL<<bit)-1));
                break;
            }
        }
        cout<<s<<" "<<x-a<<'\n';
    }
    return 0;
}