#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(),x.end()
using namespace std;
vector<int> SieveOfEratosthenes(int n);

void solve(){
    int n;
    cin >> n;
    if((n % 4 == 0) && (n >= 4)){
        cout << "YES" << endl;
        for (int i = 1; i <= n/2; i++){
            cout << 2*i << " ";
        }
        for (int i = 1; i <= n/2 - 1; i++){
            cout << 2*i-1 << " ";
        }
        cout << n+n/2-1<< endl;
    }
    else cout << "NO" << endl;
}
int main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
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