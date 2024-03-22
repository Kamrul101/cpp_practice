#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int a,b;
    int diff,same;
    cin>>a>>b;
    if(a<b){
        diff = a;
        same=b-a;
    }
    else{
        diff = b;
        same=a - b;
    }
    if(same>=2) same/=2;
    else same=0;
    cout<<diff<<" "<<same<<endl;
    
}
