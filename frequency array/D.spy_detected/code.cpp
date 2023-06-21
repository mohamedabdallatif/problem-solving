 #include <iostream>
 #include <bits/stdc++.h>

using namespace std;
 
 int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n],ind[100+1];
        for(int i=0;i<n;++i) {
            cin>>arr[i];
            ind[arr[i]]=i+1;
        }
        int freq[100+1]={};
        for (int i=0 ;i<n;++i){
        freq[arr[i]]++;
          }
          int ans=-1;
        for(int i=1;i<=100;++i){
            if(freq[i]==1){
                ans=ind[i];
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
 }