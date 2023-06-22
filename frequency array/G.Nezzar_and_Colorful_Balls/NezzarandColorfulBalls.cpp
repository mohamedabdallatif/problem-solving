#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i) cin>>arr[i];
        int freq[n+1]={};
        for(int i=0;i<n;++i){
            freq[arr[i]]++;
        }
        int maxa =0;
        for(int i=1;i<=n;++i){
            maxa = max(maxa,freq[i]);
        }    
        cout<<maxa<<endl;
    }
    return 0;
}