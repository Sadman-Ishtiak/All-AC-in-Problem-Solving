#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(),x.end()
#define endl '\n'
#define int long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

using namespace std;


int32_t main() {
    int t = 1;
    cin >> t;
    int a = 0, b = 0;
    string sa ="", sb = "", s;
    for (int i = 0; i < t; i++){
        cin >> s;
        if(sa == ""){sa = s; a = 1;}
        else if(sb == "" && sa != s){sb = s; b = 1;}
        else if(s == sa) a++;
        else b++;
    }
    // cout << sa << " " << a << endl;
    // cout << sb << " " << b << endl;

    if(a > b) cout << sa;
    else cout << sb;
	return 0;
}