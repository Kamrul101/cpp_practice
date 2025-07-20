#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =3e5+123;
// int a[mx];
int main() {
    optimize();
    int n,q;
    cin>>n>>q;
    vector<int>col[51];
    int mxCol = -1;
    for(int i=1;i<=n;i++){
        int c;
        cin>>c;
        col[c].push_back(i);
        mxCol = max(mxCol,c);
    }
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        int val = col[x][0];
        col[x][0] = 1;
        for(int i=1;i<=50;i++){
            if(i!=x && col[i].size()){
                for(auto &v:col[i]){
                    if(v<val){
                        v++;
                    }
                    else break;
                }
            }
        }
        cout<<val<<" ";
    }
    //using rotation
    /*
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<q;i++){
            int x;
            cin>>x;
            int idx = find(a.begin(),a.end(),x) - a.begin();
            cout<<idx+1<<" ";
            reverse(a.begin(),a.begin()+idx+1);
            reverse(a.begin()+1,a.begin()+idx+1);
        }
    */
    //using deque
    /*
        deque<int> dq;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            dq.push_back(x);
        }
        for(int i=0;i<q;i++){
            int x;
            cin>>x;
            
            for(int i=0;i<dq.size();i++){
                if(dq[i]==x){
                    cout<<i+1<<" ";
                    dq.erase(dq.begin()+i);
                    break;
                }
            }
            dq.push_front(x);
        }
    */
}