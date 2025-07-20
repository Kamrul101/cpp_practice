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
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int check=0;
        vector<pair<int,string>>vp;
        for(int i=0;i<n;i++){
            string temp = to_string(a[i]);
            int sz = temp.size();
            if(temp.back()=='0'){
                int j = sz-1;
                int cnt=0;
                while(temp[j]=='0'){
                    cnt++;
                    j--;
                }
                vp.push_back({cnt,temp});
            }
            else{
                check+=(int)temp.size();
            }
        }
        sort(vp.rbegin(),vp.rend());
        int x = 0;
        for(auto u:vp){
            int z = u.second.size();
            if(x%2==0){
                check+=z-u.first;
            }
            else check+=(int)u.second.size();
            x++;
        }
        
        if(check>m) cout<<"Sasha"<<endl;
        else cout<<"Anna"<<endl;
    /*
        //Another method
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int total=0;
        vector<int> zeros(n);
        for(int i=0;i<n;i++){
            string temp = to_string(a[i]);
            total += temp.size();
            int cnt=0;
            while(temp.back()=='0'){
                cnt++;
                temp.pop_back();
            }
            total-=cnt;
            zeros[i] = cnt;
        }
        sort(zeros.rbegin(),zeros.rend());
 
        for(int i=0;i<n;i++){
            if(i&1){
                total+=zeros[i];
            }
        }
        
        if(total>m) cout<<"Sasha"<<endl;
        else cout<<"Anna"<<endl;
    */
    }
    
}