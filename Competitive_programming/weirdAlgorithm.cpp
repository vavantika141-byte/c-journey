// we have to divide even number by 2 and in odd number we have to multiply by 3 and add 1 then run the program till it return 1

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    while(n!=1){
        cout<<"n"<<"";
        if(n%2==0){
            n=2;
        }
        else{
            n=3n+1;
        }
    }
  cout<<1;
  return 0;
}