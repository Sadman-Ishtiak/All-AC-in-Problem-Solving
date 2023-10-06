#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

bool solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    int check[] = {1,2,3,4,5,6,7,6,5,4,3,2,1};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if(n < 13) return false;
    int flag = 1;
    for (int i = 0; i < n; i++){
        if(a[i] != a[n-1-i]) return false;
        if(a[i] > 7) return false;
    }
    auto last = unique(a.begin(),a.end());
    a.erase(last, a.end());
    if(a.size() != 13) return false;
    for (int i = 0; i < 13; i++)
        if(a[i] != check[i]) return false;
    return true;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        bool ans = solve();
        if(ans) cout << "yes" << endl;
        else cout << "no" << endl;
    }
	return 0;
}