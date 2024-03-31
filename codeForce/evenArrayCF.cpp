#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        vector<int> odd;
        vector<int> even;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a%2!=0 && i%2==0) {
                odd.push_back(i);
            }
            if(a%2==0 && i%2!=0) {
                even.push_back(i);
            }
            
        }
        if(odd.size()!=even.size()) cout<<"-1"<<endl;
        else cout<<odd.size()<<endl;

    }
}
