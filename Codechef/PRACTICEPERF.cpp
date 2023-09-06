#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[4], ans = 0;
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    for (int i = 0; i < 4; i++)
    {
        if (a[i] >= 10)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}