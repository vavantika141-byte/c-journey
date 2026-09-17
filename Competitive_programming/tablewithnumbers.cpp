#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, h, l;
        cin >> n >> h >> l;

        int hcount = 0;
        int lcount = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x <= h)
            {
                hcount++;
            }

            if (x <= l)
            {
                lcount++;
            }
        }

        int ans;

        if (hcount < lcount)
        {
            ans = hcount;
        }
        else
        {
            ans = lcount;
        }

        if (ans > n / 2)
        {
            ans = n / 2;
        }

        cout << ans << endl;
    }

    return 0;
}