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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(s[i]=='0') ans.push_back(i+1);
        }
        cout<<ans.size()<<endl;
        if(ans.empty()){
            cout<<endl;
        }
        for(auto u:ans) cout<<u<<" \n"[u==ans.back()];
        // bool check = false;
        // for(int mask=0;mask<(1<<n);mask++){
        //     string t1,t2;
        //     vector<int> v;
        //     for(int i=0;i<n;i++){
        //         if(mask & (1<<i)){
        //             t1+=s[i];
        //             v.push_back(i);
        //         }
        //         else t2+=s[i];
        //     }
        //     bool c1=true,c2=true;
        //     int x = t1.size();
        //     int y = t2.size();
        //     for(int i=0;i<x-1;i++){
        //         if(t1[i]>t1[i+1]) {
        //             c2 = false;
        //             break;
        //         }
        //     }
        //     for(int i=0,j=y-1;i<j;i++,j--){
        //         if(t2[i]!=t2[j]){
        //             c1 = false;
        //             break;
        //         }
                
        //     }
        //     if(c1 && c2){
        //         check = true;
        //         cout<<v.size()<<endl;
        //         if(v.empty()){
        //             cout<<endl;
        //         }
        //         else{
        //             for(auto u:v){
        //                 cout<<u+1<<" \n"[u==v.back()];
        //             }
        //         }
        //         break;
        //     }

        // }
        // if(!check) cout<<-1<<endl;
        
    }
    
}