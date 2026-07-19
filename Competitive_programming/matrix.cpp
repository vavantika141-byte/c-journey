#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5][5];
    int r,c;
    for(int i=0; i<5;i++){
        for(int j=0; j<5; j++){
            cin>>i>>j;
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(a[i][j]==1){
                r=i;
                c=j;
            }
        }
    }
    int m=abs(r-2)+abs(c-2);
    cout<<m<<endl;
    return 0;    
}
// find the first position then the answer as each adjacent swap moves it one step closer