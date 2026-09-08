#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin>>y;
    while(true){
    y++;
    string s= to_string(y);
    bool ok=true;
    for(int i=0; i<4; i++){
        for(int j= i+1; j<4; j++){
            if(s[i]==s[j]){
                ok=false;
            }
        }
    }
    if(ok){
        cout<<y;
        break;
    }
}
return 0;

}