#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int freq[100+1]={};
    for(int i=0;i<n;++i){
        freq[arr[i]]++;
    }
    int first=0,res=0;
     for(int i=1;i<=100;++i){
        while(freq[i]>1){
            freq[i]-=2;
            first+=2;
            if(first==4){
                first=0;
                res++;
            }
        }
    } 
    cout<<res<<endl;
    return 0;
}