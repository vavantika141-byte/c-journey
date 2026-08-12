//Missing number
// we will use the approach of n*(n+1)/2
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long sum= n*(n+1)/2;
    for(int i=0; i<n-1; i++){
        long long x;
        cin>>x;
        sum=sum-x;
    }
    cout<< sum;
    return 0;
}