#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(),x.end()
using namespace std;
vector<int> SieveOfEratosthenes(int n);
map<char, char>k;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n-(n%2); i+=2){
        char x = s[i];
        s[i] = s[i+1];
        s[i+1] = x;
    }
    for (int i = 0; i < n; i++){
        cout << k[s[i]];
    }
    cout << endl;
}
int main() {
    char x = 'z';
    for(char i = 'a'; i <= 'z'; i += 1){
        k[i] = x;
        x--;
    }
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