#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main() {
    string code;
    long long int n = 0, len, i = 0, flag = 0, ans = 0;
    cin >> code;
    len = code.length();
    while (i <= len) {
        if (code[flag] == code[i])
            n++;
        else {
            ans = max(n, ans);
            n = 1;
            flag = i;
        }
        i++;
    }
    cout << ans << endl;
    return 0;
}