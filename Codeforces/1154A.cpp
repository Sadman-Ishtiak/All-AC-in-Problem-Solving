#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(),x.end()
using namespace std;


void solve(){
    
}
int main() {
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    int m = max({a[0],a[1],a[2],a[3]});
    vector<int>x;
    for (int i = 0; i < 4; i++){
        x.push_back(m-a[i]);
    }
    sort(all(x));
    reverse(all(x));
    x.pop_back();
    for(auto i : x) cout << i << " ";
	return 0;
}