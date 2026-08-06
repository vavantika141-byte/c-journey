#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >>t;
   while(t--){
       int n;
        cin>> n;
       int a[55];
       int sum = 0;
      for(int i=0; i<n; i++){
            cin>>a[i];
            sum = sum + a[i];
        }
       sort(a, a + n);
       int maxcnt = 0;
       for(int i = 0; i < n; i++){
            if(i > 0 && a[i]==a[i - 1])
                continue;
            int cnt=0;
        for(int j = 0; j < n; j++){
                if(a[j] == a[i])
                    cnt++;
            }
            if(cnt > maxcnt)
                maxcnt = cnt;
        }
        int other = n - maxcnt;
        if(maxcnt <= other + 1){
            cout<<sum<<endl;
            continue;
        }
        int ans=0;
        for(int i = 0; i < n; i++){
            if(i > 0 && a[i]==a[i - 1])
                continue;
            int cnt = 0;
            for(int j = 0; j < n; j++){
                if(a[j] == a[i])
                    cnt++;
            }
           other=n-cnt;

           if(cnt>other+1){
           int damage=sum-(cnt-(other+2))*a[i];
           if(damage>ans)
           ans=damage;
}
        }

        cout<<ans<<endl;
    }

    return 0;
}