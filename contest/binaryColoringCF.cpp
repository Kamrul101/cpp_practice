#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v;
        while(n>0){
            if(n%2==0){
                v.push_back(0);
                n/=2;
            }
            else{
                if(n%4==1){
                    v.push_back(1);
                    n=(n-1)/2;
                }
                else{
                    v.push_back(-1);
                    n=(n+1)/2;
                }
            }
        }
        cout<<v.size()<<endl;
        for(auto u:v){
            cout<<u<<" ";
        }
        cout<<endl;

    }
}
