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

void solve(int t){
    cout << "Case " << t+1 << ":\n";
    string command;
    stack<string>forward, back;
    forward.push("http://www.lightoj.com/");
    do {
        cin >> command;
        if (command == "VISIT") {
            string url;
            cin >> url;
            back.push(forward.top());
            while (!forward.empty()) {
                forward.pop();
            }
            forward.push(url);
            cout << forward.top() << endl;
        }
        if (command == "FORWARD") {
            if(forward.size() <= 1) {
                cout << "Ignored\n";
            } else {
                back.push(forward.top());
                forward.pop();
                cout << forward.top() << endl;
            }
        }
        if (command == "BACK") {
            if(back.empty()) {
                cout << "Ignored\n";
            } else {
                forward.push(back.top());
                back.pop();
                cout << forward.top() << endl;
            }
        }
    } while (command != "QUIT");
    
}
int32_t main() {
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve(i);
    }
    return 0;
}