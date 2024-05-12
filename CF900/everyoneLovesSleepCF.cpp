#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n, h,m;
        cin>>n>>h>>m;
        vector<int>v;
        for(int i=0;i<n;i++){
            int hh,mm;
            cin>>hh>>mm;
            int newH;
            if(hh<h){
                newH = 24*60 - (h*60)- m;
                
                newH+= hh*60+mm;
                v.push_back(newH);
            }
            else{
                if(hh==h && mm<m){
                newH = 24*60 - (h*60)- m;
                newH+= hh*60+mm;
                v.push_back(newH);
                }
                else{newH = hh*60+mm - h*60 - m;
                v.push_back(newH);
                }
            }
        }
        sort(v.begin(),v.end());
        cout<<v[0]/60<<" "<<v[0]%60<<endl;
    }
    
    
}