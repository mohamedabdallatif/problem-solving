#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >>n;
    string str;
    cin>>str;
    map <char, int>mp;
    mp['A']=0;
    mp['D']=0;
    for(int i=0;i<n;++i){
        mp[str[i]]++;
    }
    if(mp['A']>mp['D'])
      cout<<"Anton"<<endl;
    else if(mp['A']<mp['D'])
       cout<<"Danik"<<endl;
    else
       cout<<"Friendship"<<endl;
    return 0;
}