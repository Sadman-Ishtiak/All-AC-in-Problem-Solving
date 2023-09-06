#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l;
    cin >> n >> l;
    vector<int>pos(n);
    for (int i = 0; i < n; i++)
        cin >> pos[i];
    sort(pos.begin(), pos.end());
    float t = 0;
    for (int i = 1; i < n; i++)
    {
        if(pos[i] - pos[i-1] > t) t = pos[i] - pos[i-1];
    }
    t = t / 2;
    if((pos.front() != 0) && (pos.front() > t)) t = pos.front();
    if((pos.back() != l) && ((l - pos.back()) > t )) t = (l - pos.back());
    printf("%.10f",t);
    return 0;
}