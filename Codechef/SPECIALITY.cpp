#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int s, t, e;
        cin >> s >> t >> e;
        if(s>t && s>e) cout << "Setter" << endl;
        else if(t>s && t>e) cout << "Tester" << endl;
        else cout << "Editorialist" << endl;
    }
	return 0;
}