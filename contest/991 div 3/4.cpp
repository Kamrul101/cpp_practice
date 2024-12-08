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
        int j=0;
        for(int i=0;i<s.size();i++){
            int k = i;
            for(int j=i;j<s.size() && j<i+10;j++){
                if(s[j]-j>s[k]-k){
                    k=j;
                }
            }
            while(k>i){
                s[k]--;
                swap(s[k-1],s[k]);
                k--;
            }
        }
        cout<<s<<endl;
        
    }
    
}