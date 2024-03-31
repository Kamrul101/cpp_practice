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
        vector<char> v;
        string s;
        int n;
        cin>>n>>s;
        bool f = true;
        for(int i=0;i<n;i++){
            if(s[i]!=s[i+1]){
                for(int j=i+1;j<n;j++){
                    if(s[i]==s[j]){
                        f=false;
                        break;
                    }
                }
            }
        }
        cout<<(f?"YES":"NO")<<endl;
       

    }
}
