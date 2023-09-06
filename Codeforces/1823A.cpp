#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k, flag = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            if (((n-i)*(n-i-1) + i*(i-1)) == k*2)
            {
                flag = 1;
                cout << "YES" << endl;
                for(int j = 0; j<i; j++) cout << "-1 ";
                for(int j = i; j<n; j++) cout << "1 ";
                break;
            }
            
        }
        if(flag == 0) cout << "NO";
        cout << endl;
    }
    return 0;
}