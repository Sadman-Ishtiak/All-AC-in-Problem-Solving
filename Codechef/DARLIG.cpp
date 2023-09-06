#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int level,state;
        cin >> level >> state;
        if (level % 4 == 0)
        {
            if (state)
            {
                cout << "On" << endl;
            }
            else cout << "Off" << endl;
        }
        else{
            if(state) cout << "Ambiguous" << endl;
            else cout << "On" << endl;
        }
    }
	return 0;
}