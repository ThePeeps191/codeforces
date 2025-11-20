#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, a, val1, val2;
    cin >> n >> m >> a;
    if (n % a == 0) val1 = n / a;
    else val1 = n / a + 1;
    if (m % a == 0) val2 = m / a;
    else val2 = m / a + 1;
    ll ans = val1 * val2;
    cout << ans << endl;
}
