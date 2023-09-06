#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, flag = 0, count = 1, t1, t2;
        cin >> n;
        cin >> t1;
        n--;
        while(n--){
            cin >> t2;
            if(t1 <= t2){flag = 1;}
            t1 = t2;
        }
        if (flag == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}