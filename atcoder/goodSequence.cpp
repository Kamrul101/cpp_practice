#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int n;
    cin>>n;
    map<int,int> cnt;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        cnt[a]++;
    }
    int count=0;
    for(auto u: cnt){
        if(u.first<=u.second){
            count+=(u.second-u.first);
        }
        else count+=(u.second);
    }
    cout<<count<<endl;
}