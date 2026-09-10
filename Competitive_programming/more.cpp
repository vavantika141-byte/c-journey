#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[j] > a[i]) {
                    a[j] = a[i];
                    break;
                }
            }
        }
        long long ans = 0;
        for (int x : a) {
            ans += x;
        }
        cout << ans << '\n';
    }
    return 0;
}
  