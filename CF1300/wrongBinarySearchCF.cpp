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
        vector<int> v(n);
        for(int i=0;i<n;i++) v[i] = i+1;

        int l = 0 ,r = 0;
        bool check = true;
        while(l<n){
            while(r<n && s[l]==s[r]) r++;
            if(s[l]=='0'){
                if(r-l==1){
                    check = false;
                    break;
                }
                reverse(v.begin()+l,v.begin()+r);
            }
            l = r;
        }
        if(!check){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    
}