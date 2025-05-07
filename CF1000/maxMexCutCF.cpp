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
        string s1,s2;
        cin>>s1>>s2;

        int ans = 0;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                ans+=2;
            }
            else if(s1[i]=='1' && s2[i]=='1'){
                if(s1[i+1]=='0' && s2[i+1]=='0'){
                    ans+=2;
                    i++;
                }
                else if(s1[i+1]!=s2[i+1]){
                    continue;
                }
            }
            else if(s1[i]=='0' && s2[i]=='0'){
                if(s1[i+1]=='1' && s2[i+1]=='1'){
                    ans+=2;
                    i++;
                }
                else if(s1[i+1]=='0' && s2[i+1]=='0'){
                    ans+=1;
                }
                else if(s1[i+1]!=s2[i+1]){
                    ans+=1;
                }
                else if(i+1==n) ans++;
            }
        }
        cout<<ans<<endl;
        
    }
    
}