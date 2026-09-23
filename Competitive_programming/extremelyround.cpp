#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t; 
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string x = to_string(n);
        cout << (x[0] - '0') + (9*x.size()) - 9 << endl;
    }
}