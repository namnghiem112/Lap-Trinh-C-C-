#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long a[11], f[101] = {}, mod = 1e9 + 7;
    for (int i = 1; i <= 10; i++)
        a[i] = 1;
    f[1] = 10;
    for (int i = 2; i <= 100; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            long long s = 0;
            for (int k = j; k <= 9; k++)
                s += a[k];
            a[j] = s;
            f[i] = (f[i] + s) % mod;
        }
    }
    for (int i = 2; i <= 100; i++)
        f[i] = (f[i] + f[i - 1]) % mod;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << f[n] << endl;
    }
}