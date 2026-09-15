#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool hasN=false;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='N'){
                hasN=true;
                break;
            }
        }
        if(hasN)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}