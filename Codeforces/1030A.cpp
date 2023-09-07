#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    int ans = 0;
    while(t--){
        int tmp;
        cin >> tmp;
        ans += tmp;
    }
    if(ans) cout << "HARD";
    else cout << "EASY";
	return 0;
}