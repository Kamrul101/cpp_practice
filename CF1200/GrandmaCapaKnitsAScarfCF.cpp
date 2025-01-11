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
        int ans = INT_MAX;
        for(int i=0;i<26;i++){
            int l=0,r = n-1,cnt=0;
            while(l<r){
                if(s[l]==s[r]) {
                    l++;
                    r--;
                    continue;
                }
                else if(s[l]=='a'+ i){
                    l++;
                    cnt++;
                }
                else if(s[r]=='a'+ i){
                    r--;
                    cnt++;
                }
                else{
                    cnt = INT_MAX;
                    break;
                }

            }
            ans = min(ans,cnt);
        }
        cout<<(ans==INT_MAX?-1:ans)<<endl; 
        
    }
    
}