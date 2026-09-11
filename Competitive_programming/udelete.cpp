#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int pos=-1;
 
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                for(int j=i+1;j<n;j++){
                    if(s[j]=='1'){
                        pos=i;
                        break;
                    }
                }
                if(pos!=-1)
                    break;
            }
        }
        if(pos==-1){
            int z=s.find('0');
            s.erase(z,1);
        }
        else{
            s.erase(pos,1);
        }
        int bob=-1;
        for(int i=0;i<(int)s.size();i++){
            if(s[i]=='1'){
                for(int j=i+1;j<(int)s.size();j++){
                    if(s[j]=='0'){
                        bob=i;
                        break;
                    }
                }
                if(bob!=-1)
                    break;
            }
        }
        if(bob==-1)
            bob=s.find('1');
        s.erase(bob,1);
        cout<<s<<'\n';
    }
 
    return 0;
}