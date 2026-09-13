/*
n-identical boxes, weight of each box is m and the durability is d ,
calculate min number of towers , given each of n boxes must be used
*/ 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n, m,d;
    cin>>n>>m>>d;
    int max_boxes= (d)/(m+1);
    int towers = (n+ max_boxes-1)/max_boxes;
    cout<<towers<<'\n';
    }
    return 0 ;
}