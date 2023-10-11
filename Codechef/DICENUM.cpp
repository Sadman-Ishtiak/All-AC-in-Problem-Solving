#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    vector<int>a(3), b(3);
    ll suma = 0, sumb = 0;
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    for (int i = 0; i < 3; i++)
        cin >> b[i];
    sort(a.begin(),a.end());
    sort(b.begin(), b.end());
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for (int i = 0; i < 3; i++){
        suma *= 10;
        sumb *= 10;
        suma += a[i];
        sumb += b[i];
    }
    if(suma > sumb) cout << "Alice" << endl;
    else if(sumb > suma) cout << "Bob" << endl;
    else cout << "Tie" << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}