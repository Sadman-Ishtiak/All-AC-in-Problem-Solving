#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(),x.end()
using namespace std;
vector<int> SieveOfEratosthenes(int n);

void solve(){
    int a,b;
    cin >> a >> b;
    int k = (a%10 == b%10) ? 0:1;
    cout << abs(a-b)/10 + k<< endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
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