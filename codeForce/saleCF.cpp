#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int m,n;
    cin>>m>>n;
    int sum=0;
    vector<int>v;
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        v.push_back(a); 
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++){
        
        if(n>0 && v[i]<0){
            sum+= v[i]* -1;
            n--;
        }
    }
    cout<<sum<<endl;

}
