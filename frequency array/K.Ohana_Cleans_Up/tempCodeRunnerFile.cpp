#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int>mp;
    int res = 1;
    for(int i = 1; i <= n; ++i) {
        string s; 
        cin >> s;
        mp[s]++;
        res = max(res, mp[s]);
    }
 
    cout << res << "\n";
    return 0;
}