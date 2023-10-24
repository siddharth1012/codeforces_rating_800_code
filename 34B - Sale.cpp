#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll int n,m;
    cin >> n >> m;
    ll int a[n];
    
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a,a+n);
    
    ll int ans = 0;
    ll int i = 0;
    
    while(m--)
    {
        if(a[i] > 0) break;
        ans += abs(a[i]);
        i++;
    }
    cout << ans;
    return 0;
}
