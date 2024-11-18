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
bool nod(int n){
    int cnt=0;
    for(int i=1; i<=n;i++){
        if(n%i==0){
            cnt++;    
        }
        if(cnt>2) return true;
    }
    if(cnt==2) return false;
    
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> odd,even;
        if(n<=4) cout<<-1<<endl;
        else{
            for(int i=1;i<=n;i++){
            if(i%2) odd.push_back(i);
            else even.push_back(i);
            }
            ll x = even[0]+odd.back()+0LL;
            if(nod(x)){
                for(auto u:odd) cout<<u<<" ";
                for(auto u:even) cout<<u<<" ";
                cout<<endl;
            }
            else{
                bool check = false;
                for(int i=odd.size()-1;i>=0;i--){
                    x = even[0]+odd[i]+0LL;
                    if(nod(x)){
                        swap(odd[i],odd[odd.size()-1]);
                        for(auto u:odd) cout<<u<<" ";
                        for(auto u:even) cout<<u<<" ";
                        cout<<endl;
                        check = true;
                        break;
                    }
                }
                if(!check){
                    for(int i=0;i<even.size();i++){
                        x = even[i]+odd.back()+0LL;
                        if(nod(x)){
                            swap(even[i],even[0]);
                            for(auto u:odd) cout<<u<<" ";
                            for(auto u:even) cout<<u<<" ";
                            cout<<endl;
                            check = true;
                            break;
                        }
                    }
                }
                if(!check) cout<<-1<<endl;

            }

            
        
        }
        
    }
    
}