#include<iostream>
using namespace std;
int main(){
    // n-members, k-opinions, Y-number of members who agree, N-  numbers of people who disagree
    // Y>N- members who diagree leave the room
    //Y<N- members who agree leave the room
    // Y=N- both leave the room
    // including me, i have to stay in the club so i have to be selfish and make people stay in the club, my opinion should match 
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    string opinion;
    cin>>opinion;
    int ans=1;
    for(int i=1; i<n;i++){
        string s;  
        cin>>s;
        if(s== opinion){
            ans++;
        }
    }
    cout<<ans<<endl;
}
return 0;
}