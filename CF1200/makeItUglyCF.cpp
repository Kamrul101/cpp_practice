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
        vector<int> v(n),a;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool ans = false;
        if(v[n-1]!=v[0]) {
            cout<<0<<endl;
            ans = true;
        }
        if(!ans){
            a.push_back(-1);
            for(int i=1;i<n;i++){
                if(v[i]!=v[0]) a.push_back(i);
            }
            a.push_back(n);
            if(a.size()<=2){
                cout<<-1<<endl;
                ans = true;
            }
            if(!ans){
                int mn= INT_MAX;
                for(int i=0;i<a.size()-1;i++){
                    mn = min(mn,a[i+1]-a[i]-1);
                }
                cout<<mn<<endl;
            }
        }

    }
    
}