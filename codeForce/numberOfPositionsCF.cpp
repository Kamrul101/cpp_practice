#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n";


int main() {
    optimize();
    
    int n,a,b;
    cin>>n>>a>>b;
    cout<<n-max(a+1,n-b) + 1<<endl;
    
}