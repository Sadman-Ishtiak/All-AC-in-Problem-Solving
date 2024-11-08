#include<bits/stdc++.h>
#define     int             long long
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
int N;
void odd_even(int *a, int n){
    int odd = 0, even = 0;
    for (int i = 0; i < N; i++) {
        if(a[i] % 2 == 0) even++;
        else odd++;
    }
    cout << even << " " << odd << endl;
}
void odd_even(int n, int *a){
    int odd = 0, even = 0;
    for (int i = 0; i < N; i++) {
        if(a[i] % 2 == 0) even++;
        else odd++;
    }
    cout << even << " " << odd << endl;
}
void odd_even(int *a){
    int odd = 0, even = 0;
    for (int i = 0; i < N; i++) {
        if(a[i] % 2 == 0) even++;
        else odd++;
    }
    cout << even << " " << odd << endl;
}
int32_t main() {
    // int n;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    odd_even(a, N);
    return 0;
}