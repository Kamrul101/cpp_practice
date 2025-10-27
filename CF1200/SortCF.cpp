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
        int n,q;
        cin>>n>>q;

        vector<vector<int>>pre1(n+1,vector<int>(26,0));
        vector<vector<int>>pre2(n+1,vector<int>(26,0));

        string s1,s2;
        cin>>s1>>s2;

        for(int i=1;i<=n;i++){
            char c = s1[i-1];
            pre1[i][c-'a']++;
            for(int j=0;j<26;j++){
                pre1[i][j] +=pre1[i-1][j];
            }
        }
        for(int i=1;i<=n;i++){
            char c = s2[i-1];
            pre2[i][c-'a']++;
            for(int j=0;j<26;j++){
                pre2[i][j] +=pre2[i-1][j];
            }
        }

        while(q--){
            int l,r;
            cin>>l>>r;
            int ans=0;
            for(int i=0;i<26;i++){
                int val1 = pre1[r][i] - pre1[l-1][i];
                int val2 = pre2[r][i] - pre2[l-1][i];
                ans+=abs(val1-val2);
            }
            cout<<ans/2<<endl;
        }


        
    }
    
}