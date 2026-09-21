#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b, c;
        cin>>a>>b>>c;
        long long option1= llabs(a-b);
        long long option2= a+c-b;
        cout<<max(option1, option2)<<endl;
    }
    return 0;
}