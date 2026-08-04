#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
     int maxLen = 1;      
    int curLen = 1;      
    for(int i = 1; i < n; i++){
        if(a[i] > a[i-1]){
            curLen = curLen + 1;
        } else {
            curLen = 1;
        }
         if(curLen > maxLen){
            maxLen = curLen;
        }
    }
    cout << maxLen << endl;
    return 0;
}