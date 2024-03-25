#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int cnt=0;
    for(int i=2;i<n;i++){
        if(v[i-2]<=5-k && v[i-1]<=5-k && v[i]<=5-k){
            cnt++;
            i+=2;
        }
        else{
            i++;
        }
    }
    cout<<cnt<<endl;
}