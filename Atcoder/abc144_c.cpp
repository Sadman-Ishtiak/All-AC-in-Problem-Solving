#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     ld              long double
#define     all(x)          x.begin(),x.end()
#define     sort(x)         sort(all(x));
#define     FastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     debug(x)        cout << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

set<int>primes = {2};
 
void SieveOfEratosthenes(int n){
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            primes.insert(p);
}

void solve(){
    int n;
    cin >> n;
    vector<pair<int,int>>potential_answers;
    for (int i = 1; i*i <= n; i++) {
        if(n%i == 0) potential_answers.push_back(make_pair(i, n/i));
    }
    int flag = INT64_MAX;
    for (auto &&i : potential_answers) {
        if (flag > i.first + i.second - 2) {
            flag = i.first + i.second - 2;
        }
    }
    cout << flag;
}
int32_t main() {
    int t = 1;
    SieveOfEratosthenes(1000000+10);
    // cin >> t;
    while(t--) solve();
    return 0;
}