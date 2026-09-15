// 3 cuts to get 4 parts 
#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n%2!=0){
        cout<<0;
    }
    else{
        cout<<(n-2)/4;
    }
}
