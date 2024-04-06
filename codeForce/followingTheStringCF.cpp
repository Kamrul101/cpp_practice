#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
       map<int,int> m;
       int n;
       cin>>n;
       for(int i=0;i<n;i++){
        cin>>a[i];
        // m[a[i]]++;
       }
       string s;
       for(int i=0;i<n;i++){
        m[a[i]]++;
        s+=m[a[i]]+'a'-1;
       }
       cout<<s<<endl;
    }

}
