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
        int n,k;
        cin>>n>>k;
        vector<int>a(n),b(n);
        int sumA=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            sumA+=a[i];
        }
        for(int i=0;i<n;i++) {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0,j=n-1;
        while(k>0){
            
                if(a[i]<b[j]){
                    sumA-=a[i];
                    sumA+=b[j];
                }
                k--;
                i++;
                j--;
            
        }
        cout<<sumA<<endl;   
    }
}
