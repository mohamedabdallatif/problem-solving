#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int p;
    cin>>p;
    while(p--){
        set<double>s;
        int a,b;
        cin>>a>>b;
        s.insert(a+b);
        s.insert(a-b);
        s.insert(b-a);
        s.insert(a*b);
        s.insert((float)a/b);
        s.insert((float)b/a);
        cout<<s.size()<<endl;
    }
   return 0;
}