#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int k,j=1;
    vector<int>v;
    cin>>k;
    char s[200]={};
    cin>>s;
    int  s_len=strlen(s);
    int freq[200]={};
    for(int i=0;i<s_len;++i){
        if(freq[s[i]]==0){
            v.push_back(i);
            freq[s[i]]=1;
        }
    }
    if(k==1) 
          cout<<"YES\n"<<s<<endl;    
  else if(k<=v.size()){
        cout<<"YES\n"<<s[0];
        for(int i=1;i<s_len;++i){
            if(v[j]==i && k>1){
                cout<<endl;
                k--;
                j++;
            }
            cout<<s[i];
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}