#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> mp;
        vector<vector<int>>v(n+1);
        for(int i=0;i<n;i++){ 
            cin>>a[i];
            v[a[i]].push_back(i);
        }
        int x = 1;
        vector<int> ans(n);
        bool check = true;
        for(int i=0;i<=n;i++){
            if(!v[i].empty()){
                if(v[i].size()>=i){
                    if(v[i].size()%i!=0){
                        check =false;
                        break;
                    }
                    else{
                        int y = v[i].size();
                        int cnt = 0;
                        for(int j=0;j<y;j++){
                            int val = v[i][j];
                            ans[val] = x;
                            cnt++;
                            if(cnt==i){
                                cnt=0;
                                x++;
                            }
                        }
                    }
                }
                else{
                    check = false;
                    break;
                }
            }
        }
        if(!check){
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<endl;

        
        
        
    }
    
}