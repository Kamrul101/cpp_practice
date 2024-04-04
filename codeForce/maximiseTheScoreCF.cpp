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
       int n,count=0;
       cin>>n;
       vector<int> v;
       for(int i=0;i<2*n;i++){
        int a;
        cin>>a;
        v.push_back(a);

       }
       sort(v.begin(),v.end());
       int mx=0;
       for(int i=0;i<2*n;i++){
        mx+=min(v[i],v[i+1]);
        i++;
        
       }
       cout<<mx<<endl;
       
    }

}
