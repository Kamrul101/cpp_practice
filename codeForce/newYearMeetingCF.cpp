#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    vector<int> v;
    for(int i=0;i<3;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=1;i<3;i++){
        sum+=v[i]-v[i-1];
    }
    cout<<sum<<endl;
    
    
}
