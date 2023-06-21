#include <iostream>
 #include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    char s[n]={};
    for(int i=0;i<n;++i){
        cin>>s[i];
    }
    
    int freq[27]={};
    for(int i=0;i<n;++i){
        freq[tolower(s[i])-'a']++;
    }
    int res=0;
     for(int i=0;i<26;++i){
        if(freq[i]==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}