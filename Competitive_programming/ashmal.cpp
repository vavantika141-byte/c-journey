#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        vector<string> a(n);
        for (auto &x : a) cin >> x;
        string s = "";
        for(int i = 0; i < n; i++){
            string opt1 = a[i] + s; 
            string opt2 = s + a[i];
            s=min(opt1, opt2);
        }
        cout<<s<<"\n";
    }
}
