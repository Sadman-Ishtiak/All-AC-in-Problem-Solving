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

char buffer[10000];
map<int, set<int>>connect;
set<int>primes;
void reverse(char str[], int length)
{
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        end--;
        start++;
    }
}
// Implementation of citoa()
char* citoa(int num, char* str, int base)
{
    int i = 0;
    bool isNegative = false;
 
    /* Handle 0 explicitly, otherwise empty string is
     * printed for 0 */
    if (num == 0) {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }
 
    // In standard itoa(), negative numbers are handled
    // only with base 10. Otherwise numbers are
    // considered unsigned.
    if (num < 0 && base == 10) {
        isNegative = true;
        num = -num;
    }
 
    // Process individual digits
    while (num != 0) {
        int rem = num % base;
        str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
        num = num / base;
    }
 
    // If number is negative, append '-'
    if (isNegative)
        str[i++] = '-';
 
    str[i] = '\0'; // Append string terminator
 
    // Reverse the string
    reverse(str, i);
 
    return str;
}
bool isprime(int n){
    if(n < 2) return false;
    if(n == 2) return true;
    int flag = sqrt(n)+1;
    for (int i : primes){
        if(n%i == 0) return false;
        if(i > flag) return true;
    }
    return true;
}

void make_connections(){
    for(int i : primes){
        string s1 = citoa(i, buffer, 10);
        set<int> yahoo;
        for(auto j : primes){
            if(i == j) continue;
            else{
                int counter = 0;
                string s2 = citoa(j, buffer, 10);
                if(s1[0] == s2[0]) counter++;
                if(s1[1] == s2[1]) counter++;
                if(s1[2] == s2[2]) counter++;
                if(s1[3] == s2[3]) counter++;
                if(counter == 3) yahoo.insert(j);
            }
        }
        connect[i] = yahoo;
    }
}

void solve(){
    int a,b;
    cin >> a >> b;
    if(a == b){
        cout << 0 << endl;
        return;
    }
    queue<int>q;
    map<int, int> dist;
    map<int, bool> visited;
    for(auto i : primes){
        visited[i] = false;
        dist[i] = 1e9+7;
    }
    for(auto i: connect[a]){
        q.push(i);
        dist[i] = 1;
    }
    while (!q.empty()){
        auto curr = q.front();
        q.pop();
        for(auto i : connect[curr]){
            if(!visited[i]){
                visited[i] = true;
                q.push(i);
                dist[i] = dist[curr]+1;
            }
        }
        // cout << curr << " " << dist[curr] << endl;
    }
    if(dist[b] != 1e9+7) cout << dist[b];
    else cout << "Impossible";
    cout << endl;
}
int32_t main() {
    int t = 1;
    for (int i = 0; i < 9999; i++){
        if(isprime(i)) primes.insert(i);
    }
    for (int i = 0; i < 1000; i++){
        primes.erase(i);
    }
    // cout << primes.size() << endl;
    make_connections();
    // test cache
    // for(auto i: connect){
    //     cout << i.first << " : ";
    //     for(auto j : i.second)
    //         cout << j << " ";
    //     cout << "\n\n\n";
    // }
    cin >> t;
    while(t--) solve();
    return 0;
}