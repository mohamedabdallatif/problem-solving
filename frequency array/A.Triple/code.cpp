 #include <iostream>
 #include <bits/stdc++.h>

using namespace std;
 
 int main(){
    int t,n;
    cin>>t;
    while(t--){
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
       cin>>arr[i];
    int freq[n+1]={};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int res=-1;
    for(int j=1;j<n+1;++j){
        if(freq[j]>=3){
            res=j;
        }
    }
    cout<<res<<endl;
    }
    
    return 0;
 }