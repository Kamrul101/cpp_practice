#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        int mid;
        int temp= n;
        if(n%2!=0){

                mid = temp/2;
        }
        else  mid = (temp/2)-1;
        v[mid]++;
        int count=1;
        for(int i=mid;i<n-1;i++){
            if(v[i]>v[i+1]){
                v[i+1]++;
                count++;
            }
            
        }
        cout<<count<<endl;
    }

}
