#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    
}
int main() {
    int n,m;
    cin >> n >> m;
    vector<int>a(m);
    for (int i = 0; i < m; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = a[m-1]-a[0];
    for (int i = 0; i < m-n+1; i++)
    {
        ans = min({ans, a[i+n-1] - a[i]});
        // cout << ans << " ";
    }
    cout << ans << endl;
	return 0;
}