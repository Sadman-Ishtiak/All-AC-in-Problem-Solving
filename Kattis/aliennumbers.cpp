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



void solve(int z){
    string number, base1, base2;
    cin >> number >> base1 >> base2;
    int b1 = base1.length(), b2 = base2.length(), nl = number.length();
    // base 1 to decimal
    map<char, int>m1;
    for (int i = 0; i < b1; i++){
        m1[base1[i]] = i;
    }
    
    int num = 0;
    for (int i = 0; i < nl; i++){
        num += m1[number[i]]*pow(b1, nl-i-1);
    }
    
    string ans = "";
    map<int, char>m2;
    for (int i = 0; i < b2; i++){
        m2[i] = base2[i];
    }

// for(auto i: m2){
//     cout << i.first << " " << i.second << endl;
// }
    while (num){
        ans = ans + m2[num%b2];
        num /= b2;
    }
    reverse(all(ans));
    cout << "Case #" << z << ": " << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve(i+1);
    }
    
    return 0;
}