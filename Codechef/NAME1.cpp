#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()
using namespace std;
vector<int> SieveOfEratosthenes(int n);
void solve(){
    map<char, int>ch;
    for (char i = 'a'; i <= 'z'; i++){
        ch[i] = 0;
    }
    string a, b, c = "", s;
    cin >> a >> b;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string x; cin >> x;
        c += x;
    }
    s = a+b;
    for(int i = 0; i < s.size(); i++){
        ch[s[i]]++;
    }
    for (int i = 0; i < c.size(); i++){
        ch[c[i]]--;
    }
    for (int i = 'a'; i <= 'z'; i++){
        if(ch[i] < 0){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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