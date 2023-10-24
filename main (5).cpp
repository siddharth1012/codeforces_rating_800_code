#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll int n;
    cin >> n;

    if(n >= 0)
    {
        cout << n;
        return 0;
    }

    if(n < 0 && n > -11)
    {
        cout << 0;
        return 0;
    }

    int last = n%10;
    n /= 10;
    int second = n%10;
    n /= 10;

    if(second > last)
    {
        n = n*10 + second;
    }
    else
        n = n*10 + last;

    cout << n;
    return 0;
}