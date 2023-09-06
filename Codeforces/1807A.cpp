#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    char s[n + 1];
    for (int i = 0; i < n; i++) cin >> s[i];
    unordered_set<char> even, odd;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) even.insert(s[i]);
        else odd.insert(s[i]);
    }
    bool flag = true;
    for (auto i : even) {
        for (auto j : odd) {
            if (i == j) flag = false;
      }
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}