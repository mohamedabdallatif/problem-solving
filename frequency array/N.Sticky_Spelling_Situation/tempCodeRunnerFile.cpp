#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,res=0;
    cin>>n;
    string str1,str2;
    cin>>str1>>str2;
    int freq1[27]={};
    int freq2[27]={};
    for(int i=0;i<n;++i)
        freq1[str1[i]-'a']++;
    for(int i=0;i<n;++i)
        freq2[str2[i]-'a']++;
    for(int i=0;i<26;++i){
        if(freq2[i]!=freq1[i]&&freq2[i]!=0){
            res +=freq2[i]-freq1[i];
        }
    }
    cout<<res<<endl;
}