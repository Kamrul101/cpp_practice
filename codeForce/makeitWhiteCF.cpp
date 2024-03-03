#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 2e6+123;
long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        string s;
    int n;
    cin>>n;
    cin>>s;
    int a= s.rfind('B')-s.find('B') + 1;
    cout<<a<<"\n";
    }
    
}