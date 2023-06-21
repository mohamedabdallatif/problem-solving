 #include <iostream>
 #include <bits/stdc++.h>

using namespace std;

 int main(){
    int n;
    cin >>n;
    int arr[n];
    for (int i=0;i<n;++i){
        cin >>arr[i];
    }
    int freq[6]={};
    for (int i=0 ;i<n;++i){
        freq[arr[i]]++;
    }
    for (int j=1;j<6;++j){
        cout << j <<":"<<freq[j]<<endl;
    }
    return 0;
 }
