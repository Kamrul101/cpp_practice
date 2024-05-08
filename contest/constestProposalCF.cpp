#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];
// int b[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        deque<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        while(true){
            bool ans = true;
            for(int i=0;i<n;i++){
                if(a[i]>b[i]){
                    a.push_front(b[0]);
                    ans = false;
                    break;
                }
            }
            if(ans) break;
        }
        cout<<a.size() - n<<endl;
        

    }
}
