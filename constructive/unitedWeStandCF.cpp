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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(v[0]==v.back()) cout<<-1<<endl;
        else{
            int i=0;
            while(v[i]==v[0]) i++;
            cout<<i<<" "<<n-i<<endl;
            for(int j=0;j<i;j++) cout<<v[j]<<" ";
            
            for(int j=i;j<n;j++) cout<<v[j]<<" ";
            
            
        }

    }    
    
}
