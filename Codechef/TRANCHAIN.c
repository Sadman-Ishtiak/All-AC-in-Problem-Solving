#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a=0,b=0,ab=0,o=0;
        int n;
        cin >> n;
        string s;
        for (int i = 0; i < n; i++) {
            cin >> s;
            if(s =="A")
                a++;
            else if(s == "B")
                b++;
            else if(s == "O")
                o++;
            else
                ab++;
        }
        int ans = 0;
        ans = o + max(a,b) + ab;
        cout << ans << endl;
    }
	return 0;
}