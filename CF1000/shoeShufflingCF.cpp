#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> v(n);
        for(int i=0;i<n;i++){
            v[i] = i+1;
        }
        bool ans = true;
        int i=0;
        while(i<n){
            int j = i;
            while(j<n && a[i]==a[j]) j++;
            if(j-i==1){
                cout<<-1<<endl;
                ans = false;
                break;
            }
            rotate(v.begin()+i,v.begin()+i+1,v.begin()+j);
            i = j;
        }
        if(ans){
            for(int i=0;i<n;i++) cout<<v[i]<<" ";
            cout<<endl;
        }
    }
    
}