#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int totalDrink = k*l;
    int totalLime = c*d;
    int totalSalt = p;
    int toastsByDrink = totalDrink/nl;
    int toastsByLime = totalLime;   
    int toastsBySalt = totalSalt/np;
    int minToasts = min({toastsByDrink,toastsByLime,toastsBySalt});
    int answer=minToasts/n;
    cout<<answer<<endl;
    return 0;
}
//Compute max toasts each resource allow to take the minimum since it's the bottleneck.
//Divide that minimum by n to split equally among(int division)
