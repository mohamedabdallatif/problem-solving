#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    char s[200]={};
    int c=0;
    cin>>s;
    int s_len=strlen(s);
    int freq[250]={};
    for(int i=0;i<s_len;++i){
        freq[s[i]-'a']++;
    }
    for(int i=0;i<26;++i){
        if(freq[i]!=0)
           c++;
    }
    if(c%2==0)
       cout<<"CHAT WITH HER!"<<endl;
    else
       cout<<"IGNORE HIM!"<<endl;
    return 0;
}