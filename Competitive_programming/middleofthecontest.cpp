#include<bits/stdc++.h>
using namespace std;
int main(){
    int h1, m1, h2, m2;
    char colon;
    cin>> h1>> colon >> m1;
    cin >> h2 >> colon >> m2;
    int start= h1*60 +m1;
    int end= h2*60 +m2;
    int mid=(start+end)/2;
    int h3=mid/60;
    int m3=mid%60;
    printf("%02d:%02d\n", h3, m3);
    return 0;
}