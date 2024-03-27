#include<bits/stdc++.h>
using namespace std;
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
        vector<int> v;
        if(n%4!=0) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            int sum1=0,sum2=0;
            for(int i=2;i<=n;i+=2){
                v.push_back(i);
                sum1+=i;
            }
            for(int i=1;i<n;i+=2){
                v.push_back(i);
                sum2+=i;
            }
            v[v.size()-1]+=(sum1-sum2);
            for(auto u:v){
                cout<<u<<" ";
            }
            cout<<endl;
        }
    }
    
}
