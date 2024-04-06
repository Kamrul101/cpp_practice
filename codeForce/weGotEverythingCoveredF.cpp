#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
       string s;
       for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            s+=j+'a';
        }
       }
       cout<<s<<endl;
    }

}
