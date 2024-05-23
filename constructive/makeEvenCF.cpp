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
        ll n;
        cin>>n;
        if(n%2==0) cout<<0<<endl;
        else{
            string s;
            s = to_string(n);
            if((s[0]-'0')%2==0) cout<<1<<endl;
       
            else{
            bool ans = true;
            for(int i=1;i<s.size()-1;i++){
                if((s[i]-'0')%2==0){
                    cout<<2<<endl;
                    ans = false;
                    break;
                }
            }
            if(ans) cout<<-1<<endl;
        }
        }
        
    }
    
}
