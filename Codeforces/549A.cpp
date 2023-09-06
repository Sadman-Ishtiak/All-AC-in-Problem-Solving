#include<iostream>
#include<string>
#include<vector>
using namespace std;

int solve(vector<vector<char>>& a, int i, int j) {
    int f = 0, A = 0, c = 0, e = 0;
    if (a[i][j] == 'f' || a[i][j + 1] == 'f' || a[i + 1][j] == 'f' || a[i + 1][j + 1] == 'f')
        f = 1;
    if (a[i][j] == 'a' || a[i][j + 1] == 'a' || a[i + 1][j] == 'a' || a[i + 1][j + 1] == 'a')
        A = 1;
    if (a[i][j] == 'c' || a[i][j + 1] == 'c' || a[i + 1][j] == 'c' || a[i + 1][j + 1] == 'c')
        c = 1;
    if (a[i][j] == 'e' || a[i][j + 1] == 'e' || a[i + 1][j] == 'e' || a[i + 1][j + 1] == 'e')
        e = 1;
    if ((f == 1) && (A == 1) && (c == 1) && (e == 1))
        return 1;
    else
        return 0;
}

int main() {
    int n, m, count = 0;
    cin >> n >> m;

    vector<vector<char>> a(n, vector<char>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            if (a[i][j] == 'f' || a[i][j] == 'a' || a[i][j] == 'c' || a[i][j] == 'e')
                count += solve(a, i, j);
        }
    }

    cout << count;
    return 0;
}