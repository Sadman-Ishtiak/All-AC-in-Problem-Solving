#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char s[n];
        cin >> s;
        int les = 0, gre = 0, lest = 0, gret = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '<')
            {
                lest++;
                gret=0;
            }
            if (s[i] == '>')
            {
                gret++;
                lest=0;
            }
            les = max(lest,les);
            gre = max(gre,gret);
        }
        cout << max(les,gre)+1 << endl;
    }
    return 0;
}