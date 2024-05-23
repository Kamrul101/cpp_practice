#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int res=1;
        int cnt = 1;
        map<int,int>m;
        for(int i=0;i<n;i++) {
            int c = c&a[i];
            if(c == res){
                m[c]++;
            }
            else{
                res = c;
            }
        }
        int mx=-1;
        for(auto u:m) {
            if(u.second>mx) mx = u.second;
        }
        cout<<mx<<endl;
    }
}
