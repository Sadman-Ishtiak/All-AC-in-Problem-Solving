#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    bool flag = true;
    do{
        t++;
        int temp = t;
        set<int>s;
        s.insert((temp/1)%10);
        s.insert((temp/10)%10);
        s.insert((temp/100)%10);
        s.insert((temp/1000)%10);
        if(s.size() == 4) flag = false;
    } while (flag);
    cout << t;
	return 0;
}
