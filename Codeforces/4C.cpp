#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> username;

    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        if (username.find(temp) == username.end()) {
            cout << "OK" << endl;
            username[temp] = 1;
        } else {
            cout << temp + to_string(username[temp]) << endl;
            username[temp]++;
        }
    }

    return 0;
}