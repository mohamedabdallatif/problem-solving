#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[110][110]={};
    for(int i=0;i<n;++i){
       cin>>arr[i];
    }
    int freq[110]={};
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(arr[i][j]=='0'){
                freq[j]+=1;
            }
        }
    }
    for(int i=0;i<n;++i){
        cout<<i<<":"<<freq[i]<<endl;
    }
    int maxa=0;
    for(int i=0;i<n;++i){
        maxa=max(maxa,freq[i]);
    }
    int res=0;
    for(int i=0;i<n;++i){
        if(freq[i]==maxa)
          res++;
    }
   
  // cout<<res<<endl;
    return 0;
}