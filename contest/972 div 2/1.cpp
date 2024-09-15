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
    vector<char> v  = {'a','e','i','o','u'};
    while(t--){
        int n;
        cin>>n;
        string t;
        map<char,int> mp;
        while(n>0){
            for(int i=0;i<5;i++){
                mp[v[i]]++;
                n--;
                if(n==0) break;
            }
        }
        for(auto u:mp){
            for(int i=0;i<u.second;i++) t+=u.first;
        }
        cout<<t<<endl;
        
    }
    
}