#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
while(t--){
        int n;
        cin>>n;
         int odd=0;
        int even_0=0;  
        int even_2=0; 
        for(int i=0; i<n;i++){
            long long x;
            cin>>x;
            if(x%2==1)
                odd++;
            else if(x%4==0)
                even_0++;
            else
                even_2++;
        }
        int ans=odd;
            if(even_0>ans)
            ans=even_0;
            if(even_2>ans)
            ans=even_2;
        cout<<ans<<'\n';
    }
return 0;
}