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
        int x;
        cin>>x;
        vector<int>v;
        int sum=0, last=9;
        while(sum<x && last>0){
            v.push_back(min(x-sum,last));
            sum+=last;
            last--;
        }
        reverse(v.begin(),v.end());
        if(sum<x) cout<<-1<<endl;
        else{
            for(auto u:v) cout<<u;
            cout<<endl;
        }

    }
}
