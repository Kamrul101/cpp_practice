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
        string s;
        cin>>s;
        int n = s.size();
        if(n%2) cout<<"NO"<<endl;
        else{
            bool ans=true;
            for(int i=0, j=n/2;j<n;i++,j++){
                if(s[i]!=s[j]){
                    cout<<"NO"<<endl;
                    ans = false;
                    break;
                }
            }
            if(ans) cout<<"YES"<<endl;
        }
        
        
    }
}
