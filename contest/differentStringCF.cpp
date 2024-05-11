#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// ll a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        string s,temp;
        cin>>s;
        temp= s;
        int sz =  unique(temp.begin(),temp.end())-temp.begin();
        if(sz == 1) cout<<"NO"<<endl;
        else{
            next_permutation(s.begin(),s.end());
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
    }
    
}
