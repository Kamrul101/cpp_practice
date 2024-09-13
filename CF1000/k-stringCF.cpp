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
    int k;
    cin>>k;
    string s;
    cin>>s;
    map<char,int> mp;
    if(k==1) cout<<s<<endl;
    else{
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        bool check =true;
        for(auto u:mp){
            if(u.second%k!=0){
                cout<<-1<<endl;
                check = false;
                break;
            }
        }
        string ans,temp;
        if(check){
            for(auto u:mp){
                for(int i=0;i<u.second/k;i++){
                    temp+=u.first;
                }
                u.second-= u.second/k;
            }
            for(int i=1;i<=k;i++){
                ans+=temp;
            }
            cout<<ans<<endl;
        }
    }
    
}