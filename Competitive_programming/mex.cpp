include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
    vector<int> cnt(102, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }
        int mex1 = 0, mex2 = 0;
        while (cnt[mex1] > 0) {
            cnt[mex1]--;
            mex1++;
        }
        while (cnt[mex2] > 0) {
            cnt[mex2]--;
            mex2++;
        }
        cout<<mex1+mex2<<'\n';
    }
 
    return 0;
}