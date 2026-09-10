using namespace std;
bool prime(int x)
{
    if(x<2)
        return false;
       for(int i=2; i*i<=x; i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(prime(n+1))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}