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

int is_palindrome(string s){
    string t = s;
    reverse(all(t));
    if(s == t) return 1;
    else return 0;
}

int32_t main() {
    string s;
    cin >> s;
    int f = is_palindrome(s);
    if(f) cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;
    return 0;
}