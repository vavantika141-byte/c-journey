#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
   long long total=0;
   for(int  i=1; i<=n; i++){
        long long stageCost=1+(long long)(n-i)*i;
        total+=stageCost;
    }
cout<<total<<endl;

    return 0;
}