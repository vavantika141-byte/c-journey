#include<iostream>
using namespace std;
int main(){
    long long m, n; // mistake make it long long instead of int 
    cin>>m>>n;
    int c=m%10+ n%10;
    cout<<c<<endl;
}