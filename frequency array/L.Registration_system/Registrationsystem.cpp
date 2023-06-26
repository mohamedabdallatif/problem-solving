#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    map<string,int> mp;
    while(n--){
        char s[40];
        cin>>s;
        int s_len=strlen(s);
        if(mp[s]==0){
            mp[s]++;
            cout<<"OK"<<endl;
            continue;
        }
        else{
            cout<<s<<mp[s]++<<endl;
        }
    }
    return 0;
}