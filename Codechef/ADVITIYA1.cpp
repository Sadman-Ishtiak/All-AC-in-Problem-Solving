#include <bits/stdc++.h>
#define int             long long
#define endl            '\n'
#define YES             cout << "YES" << '\n'
#define NO              cout << "NO" << '\n'
#define ld              long double
#define all(x)          x.begin(),x.end()
using namespace std;

vector<int> SieveOfEratosthenes(int n);

void solve(){
    
}
int32_t main() {
    int t = 1;
    cin >> t;
    // while(t--) solve();
    if(t >= 16 && t<= 18) cout << "ADVITIYA" << endl;
    else cout << "WAITING FOR ADVITIYA" << endl;
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