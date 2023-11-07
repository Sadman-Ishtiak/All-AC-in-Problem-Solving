#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(),x.end()
using namespace std;


void solve(){
    
}
int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min({(k*l)/(n*nl), (c*d)/n, p/(np*n)});
	return 0;
}