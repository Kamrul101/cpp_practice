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
        string s;
        cin>>s;
        int n = s.size();
        int cnt1=0,cnt2=0;
        for(auto u:s){
            if(u=='1') cnt1++;
            else cnt2++;
        }
        int ans=0;
        bool check = true;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(cnt2){
                    cnt2--;
                }
                else{
                    ans = i;
                    check = false;
                    break;
                }
            }
            else{
                if(cnt1){
                    cnt1--;
                }
                else {
                    ans = i;
                    check = false;
                    break;
                }
            }
        }
        if(check) cout<<0<<endl;
        else {
            cout<<n-ans<<endl;
        }



        
    }
    
}