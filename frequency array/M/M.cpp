#include <iostream>
#include <bits/stdc++.h>

using namespace std;


  string mtx;
int n,m;
set<int> s;
int main()
{
    cin>>n>>m;
    for(int i = 0 ;i<n;i++)
    {
        cin>>mtx;
        int x = mtx.find("G");
        int y = mtx.find("S");
        s.insert(y-x);
    }
    if(*s.begin() < 0)
        cout<<-1<<endl;
    else
        cout<<s.size()<<endl;
    return 0;
}
