#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    char s[n]={};
    cin>>s;
    int s_len = strlen(s);
    int freq[27]={};
    for(int i=0;i<s_len;++i){
        freq[s[i]-'a']++;
    }
    if(n==1){
        cout<<"YES"<<endl;
        return 0;
    }
    for(int i=0;i<26;++i){
        if(freq[i]>1){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}