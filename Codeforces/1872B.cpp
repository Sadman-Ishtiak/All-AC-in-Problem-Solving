#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, ans = INT32_MAX;
        cin >> n;
        vector<pair<int,int>>a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i].first >> a[i].second;
        for(auto i : a){
            int maxgo = i.first+(i.second-1)/2;
            ans = min(ans,maxgo);
        }
        cout << ans << endl;
    }
	return 0;
}