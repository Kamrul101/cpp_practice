#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5 + 123;
// int a[mx];


int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mn=INT_MAX,mx=-1,mxI=0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        
        if(count(a.begin(),a.end(),a[0])==n) cout<<-1<<endl;
        else {
            for(int i=0;i<n;i++){
                if(a[i]>mx){
                if(i+1<n && a[i+1]<a[i]) mx=a[i], mxI = i+1;
                else if(i-1>=0 && a[i-1]<a[i]) mx=a[i], mxI = i+1;
                }
                
            }
            cout<<mxI<<endl;
        }
       
        
    }
}
