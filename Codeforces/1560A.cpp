#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(),x.end()
using namespace std;
vector<int> SieveOfEratosthenes(int n);
vector<int>ans(1001, 0);

int main() {
    int t, k = 0,i = 1;
    cin >> t;
    while(ans[1000] == 0){
        k++;
        if(k % 3 == 0) continue;
        if(k % 10 == 3) continue;
        ans[i] = k;
        i++;
    }
    while(t--){
        int x; cin >> x;
        cout << ans[x] << endl;
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