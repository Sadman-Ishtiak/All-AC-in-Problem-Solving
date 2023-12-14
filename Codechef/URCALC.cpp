#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(),x.end()
using namespace std;
vector<int> SieveOfEratosthenes(int n);

void solve(){
    
}
int main() {
    double a,b;
    cin >> a >> b;
    char s;
    cin >> s;
    if(s == '+') cout << a+b;
    if(s == '-') cout << a-b;
    if(s == '*') cout << a*b;
    if(s == '/') cout << fixed <<  setprecision(7) << a/b;
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