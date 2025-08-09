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

map<int,bool> mp;
vector<int> v;

bool isBinary(int n){
    while(n>0){
        int d = n%10;
        if(d!=0 && d!=1) return false;
        n/=10;
    }
    return true;
}

bool canForm(int n){
    if(mp.count(n)) return mp[n];
    if(isBinary(n)) return mp[n] = true;
    for(auto u:v){
        if(u==1) continue;
        if(u>n) break;
        if(n%u==0){
            if(canForm(n/u)) return mp[n]=true;
        }
    }
    return mp[n]=false;
}


vector<int> gen(int n){
    set<int> st;
    for(int mask = 1;mask<(1<<n);mask++){
        string s;
        for(int i=n-1;i>=0;i--){
            if(mask & (1<<i)){
                s+='1';
            }
            else s+='0';
        }
        int num = stoi(s);
        st.insert(num);
    }
    vector<int>ans;
    for(auto u:st) ans.push_back(u);
    return ans;
}

int main() {
    optimize();
    int t;
    cin>>t;
    v = gen(6);
    while(t--){
        int n;
        cin>>n;
        mp.clear();
        
        bool c1 = canForm(n);
        if(c1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}