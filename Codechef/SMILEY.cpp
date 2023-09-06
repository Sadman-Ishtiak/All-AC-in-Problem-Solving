#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, ans = 0;
        cin >> n;
        char s[n + 1];
        cin >> s;
        int smile = 0, frown = 0, flag = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == ':') {
                if (smile > 0 && frown == 0 && flag == 1) {
                    ans++;
                    smile = 0;
                    frown = 0;
                } else {
                    flag = 1;
                    smile = 0;
                    frown = 0;
                }
            }
            if (s[i] == '(') {
                frown++;
            }
            if (s[i] == ')') {
                smile++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}