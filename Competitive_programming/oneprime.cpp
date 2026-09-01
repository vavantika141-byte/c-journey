#include<iostream>
using namespace std;
int main(){
    int x;
    cin>> x;
    bool prime= true;
    for(int i=2; i<x; i++){
        if(x%i==0){
            prime=false;
            break;
        }  
    }
     if(prime){
        cout<<"YES";
     }
     else{
        cout<<"NO";
     }
   return 0;
}