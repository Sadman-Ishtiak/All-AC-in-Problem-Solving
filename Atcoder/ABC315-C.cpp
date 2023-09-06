#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, flavour = 0,ans = 0;
    cin >> n;
    vector<pair<int,int>>s(n);
    for (int i = 0; i < n; i++){
        cin >> s[i].second >> s[i].first;
    }
    sort(s.begin(),s.end());
    flavour = s.back().second;
    ans = s.back().first;
    s.pop_back();
    for (int i = 0; i < n; i++)
        if(s[i].second == flavour) s[i].first /= 2;
    sort(s.begin(),s.end());
    ans += s.back().first;
    cout << ans << endl;
	return 0;
}