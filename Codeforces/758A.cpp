#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(),x.end()
using namespace std;
vector<int> SieveOfEratosthenes(int n);

int main() {
    int t = 1;
    cin >> t;
    ll ans = 0;
    int largest = 0;
    vector<int>a(t);
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        largest = max(largest, a[i]);
    }
    for (int i = 0; i < t; i++)
    {
        ans += largest - a[i];
    }
    
    cout << ans;
	return 0;
}
vector<int> SieveOfEratosthenes(int n){
    bool prime[n + 1];
    vector<int>a;
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            a.push_back(p);
    return a;
}