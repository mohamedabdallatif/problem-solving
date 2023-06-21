#include <iostream>
 #include <bits/stdc++.h>

using namespace std;

int main(){
    int n=1000,m=1000;
    char s1[n],s2[m];
    cin>>s1>>s2;
    int s1_len =strlen(s1);
    int s2_len =strlen(s2);
     int freq1[27]={};
     int freq2[27] = {};
    for(int i=0;i<26;++i){
        freq1[s1[i]-'a']++;
    }
    for(int i=0;i<26;++i){
        freq2[s2[i]-'a']++;
    }
    int res=0;
    for(int i=0;i<26;++i){
        if(freq2[i]!=0){
           int curr = min(freq1[i],freq2[i]);
           if(curr==0) {
            cout<<-1<<endl;
            return 0;
           }
           res+=min(freq1[i],freq2[i]);
        }
    }
    cout<<res<<endl;
    return 0;
}