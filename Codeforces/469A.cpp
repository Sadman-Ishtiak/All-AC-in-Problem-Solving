#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main() {
    int n,a,t;
    cin >> n;
    set<int>levels;
    cin >> a;
    for (int i = 0; i < a; i++){
        cin >> t;
        levels.insert(t);
    }
    cin >> a;
    for (int i = 0; i < a; i++){
        cin >> t;
        levels.insert(t);
    }
    if(levels.size() == n) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
	return 0;
}