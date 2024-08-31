#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

// const int mx =2e5+123;
// int a[mx];

int main() {
    optimize();
    int n;
    cin>>n;
    vector<int>v;
    vector<int>d={1,2,3,4,5,6,7};
    for(int i=0;i<7;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int day=1;
    bool ans = false;
    while(1){
        for(int i=0;i<7;i++){
            n-=v[i];
            if(n<=0){
                day=i+1;
                ans =true;
                break;
         }
        }
        if(ans) break;
    }
    
    cout<<day<<endl;
}