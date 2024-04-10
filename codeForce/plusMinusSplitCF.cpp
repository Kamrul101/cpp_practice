#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
int m[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
     int n,plus=0,minus=0;
     cin>>n;
     string s;
     cin>>s;
     for(int i=0;i<n;i++){
        if(s[i]=='+')plus++;
        else minus++;
     }
     int ans = (plus>minus)?plus-minus: minus-plus;
     cout<<ans<<endl;
    }

}
