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
        int a,b,c;
        cin>>a>>b>>c;
        string temp,ans;
        for(int i=0;i<c;i++){
            temp+=i+'a';
        }
        for(int i=0;i<=a/c;i++){
            ans+=temp;
        }
        temp.clear();
        for(int i=0;i<a;i++){
            temp+=ans[i];
        }
        cout<<temp<<endl;
    }
}
