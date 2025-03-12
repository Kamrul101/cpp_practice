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
        vector<int> v(n);
        bool flag = 0;
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(j-1>=0 && v[j-1]<v[j]&&v[j]>v[j+1]){
                    swap(v[j],v[j+1]);
                    flag=1;
                }
            }
            if(!flag) break;
        }
        if(is_sorted(v.begin(),v.end())){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
    
}