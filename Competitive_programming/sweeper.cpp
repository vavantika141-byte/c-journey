#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (auto &x : a)
            cin >> x;

        long long ans = 0;
        long long carry = 0;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == 0) {
                continue;
            }

            // Move all dust from this position to the right.
            ans += a[i];

            // The dust can be used to cross the next positions.
            carry += a[i];
        }

        cout << ans << '\n';
    }

    return 0;
}