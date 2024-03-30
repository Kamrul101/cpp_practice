#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int a,b;
    cin>>a>>b;
    int c = 7- max(a,b);
    if(c==6) cout<<"1/1"<<endl;
    else if(c==5) cout<<"5/6"<<endl;
    else if(c==4) cout<<"2/3"<<endl;
    else if(c==3) cout<<"1/2"<<endl;
    else if(c==2) cout<<"1/3"<<endl;
    else if(c==1) cout<<"1/6"<<endl;
    else cout<<"0/1"<<endl;
}
