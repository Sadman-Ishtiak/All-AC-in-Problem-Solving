#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.length();
    int ans = 0, a = 0, b = 0;
    for (int i = 0; i < len; i++)
    {
        if(s[i] == '1'){a++;b=0;}
        else{b++;a=0;}
        ans = max({a,b,ans});
    }
    if(ans >= 7) cout << "YES";
    else cout << "NO" ;
    return 0;
}