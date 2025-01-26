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

void solve(){
    int n, q;
    cin >> n >> q;
    vector<int>arr(n), queries(q);
    deque<int>dq;
    int arrmax = INT64_MIN;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arrmax = max(arrmax, arr[i]);
        dq.push_back(arr[i]);
    }
    for (int i = 0; i < q; i++) 
        cin >> queries[i];
    vector<pair<int,int>>answerdp;
    int first_max = 0;
    while(true) {
        int A,B;
        A = dq.front(); dq.pop_front();
        B = dq.front(); dq.pop_front();
        answerdp.push_back(make_pair(A, B));
        if(A > B) {
            dq.push_front(A);
            dq.push_back(B);
        } else {
            dq.push_front(B);
            dq.push_back(A);
        }
        if(A == arrmax) {
            break;
        }
    }
    vector<int>cycle;
    dq.pop_front();
    while (!dq.empty()) {
        cycle.push_back(dq.front());
        dq.pop_front();
    }

    for (int i = 0; i < q; i++) {
        if (queries[i] <= answerdp.size()) {
            cout << answerdp[queries[i] - 1].first << " " << answerdp[queries[i] - 1].second << endl;
        } else {
            cout << arrmax << " " << cycle[(queries[i] - answerdp.size() - 1) % (n-1)] << endl;
        }
    }
    
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}