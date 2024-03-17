#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    map<int,int> m1;
    map<int,int> m2;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a == 0) m1[0]++;
        else m1[1]++;

        if(b==0) m2[0]++;
        else m2[1]++;
        
    }
    int l = 0,r=0;
    if(m1[0]>=m1[1]) l=m1[1];
    else l=m1[0];
    if(m2[0]>=m2[1]) r=m2[1];
    else r=m2[0];

    cout<<l+r<<endl;
    
    
}