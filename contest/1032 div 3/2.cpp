#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool ans = false;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                cout<<"YES"<<endl;
                ans = true;
                break;
                
            }
        }
        if(!ans){
            map<char,int>mp;
            for(int i =1;i<n-1;i++) mp[s[i]]++;
            for(auto u:mp){
                if(u.second>1){
                    cout<<"YES"<<endl;
                    ans = true;
                    break;
                }
                if(u.first==s[0] || u.first==s[n-1]){
                    cout<<"YES"<<endl;
                    ans = true;
                    break;

                }
            }
            if(!ans) cout<<"NO"<<endl;
        }
        // map<char,int> mp;
        // for(int i=0;i<n-1;i++){
        //     mp[s[i]]++;
        // }

        // for(auto u:mp){
        //     if(u.second>1) {
        //         cout<<"YES"<<endl;
        //         ans =  true;
        //         break;
        //     }
        // }
        // if(!ans){
        //     mp[s[n-1]]--;
        //     mp[s[0]]++;
        //     for(auto u:mp){
        //         if(u.second>1) {
        //             cout<<"YES"<<endl;
        //             ans =  true;
        //             break;
        //         }
        //     }
        //     if(!ans) cout<<"NO"<<endl;
        // }

        
    }
    
}