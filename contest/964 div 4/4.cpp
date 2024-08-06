#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

// const int mx = 1e5+123;
// int a[mx];

int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
        string s,p;
        cin>>s>>p;
        int n=s.size();
        int m=p.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(s[i]=='?'){
                s[i]=p[j];
                j++;
                m--;
                if(m==0) break;
                
            }
            else if(s[i]==p[j]){
                j++;
                m--;
                if(m==0) break;
            }
        }
        if(m>0) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                if(s[i]=='?'){
                    s[i] = 'a';
                }
            }
            cout<<s<<endl;
        }
    }
    
   
    
}