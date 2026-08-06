#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    for(int cases=0; cases<t; cases++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=1000000;
        for(int i=1; i<=n-2; i++){
            string s2="";
            for(int j=0; j<n; j++){
                  if(j!=i){
                    s2=s2+s[j];
                  }
            }
            string compressed="";
            for(int k=0;k<(int)s2.length();k++){
                if(k==0){
                    compressed=compressed+s2[k];
                }else{
                    if(s2[k]!=s2[k-1]){
                        compressed=compressed+s2[k];
                    }
                }
            }
            int len=compressed.length();
            if(len<ans){
                ans=len;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}