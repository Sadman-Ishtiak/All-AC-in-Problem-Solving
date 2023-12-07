#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(),x.end()
using namespace std;
vector<int> SieveOfEratosthenes(int n);

void solve(){
    
}
int main() {
    int n = 1;
    cin >> n;
    vector<int>a(n), cp, mat, sp;
    int x[3] = {0,0,0};
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 3) cp.push_back(i+1);
        if(a[i] == 2) mat.push_back(i+1);
        if(a[i] == 1) sp.push_back(i+1);
        x[a[i]-1]++;
    }
    int ans = min({x[0], x[1], x[2]});
    cout << ans << endl;;
    for (int i = 0; i < ans; i++)
    {
        cout << sp[i] << " " << mat[i] << " " << cp[i] << endl;
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