#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long prev, moves=0, current;
    cin>>prev;
    for(int i=0; i<n; i++){
        cin>>current;
        if( current<prev){
            moves=moves+prev-current;
            current=prev;
        }
        prev=current;
    }
    cout<<moves<< endl;
    return 0;
}