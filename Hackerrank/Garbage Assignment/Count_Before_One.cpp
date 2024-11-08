#include<bits/stdc++.h>
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     ld              long double
#define     all(x)          x.begin(),x.end()
#define     sort(x)         sort(all(x));
#define     FastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     debug(x)        cout << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;


int count_before_one(int *a, int n){
    int count = 0;
    for (int i = 0; i < n; i++) {
        if(a[i] == 1) {
            break;
        }
        count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = count_before_one(a, n);
    cout << ans << endl;
    return 0;
}