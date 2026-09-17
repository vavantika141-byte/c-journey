#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int freq[10001]={0};
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                int x;
                cin>>x;
                freq[x]++;
            }
        }
        int maxFreq=0;
        for(int i=1; i<=n*n; i++)
        {
            if(freq[i]>maxFreq)
            {
                maxFreq=freq[i];
            }
        }
        if(maxFreq> n*(n-1))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}