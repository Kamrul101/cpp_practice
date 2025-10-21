#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =5e4+123;
int a[mx],b[mx];

bool comp(pair<int,int>&a , pair<int,int>&b){
    if(a.first>=b.first){
        return a.first>b.first? 1 : a.second<=b.second;
    }
}

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;


        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        
        int mx = INT_MIN;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=max(a[i],b[i]);
            mx = max(mx,min(a[i],b[i]));
        }

        cout<<sum+mx<<endl;

        
        
    }
    
}