#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    
    
    vector <int> nums;
    set<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        nums.push_back(a);
        s.insert(a);
    }
    if(nums.size()>s.size()) cout<<"TRUE"<<endl;
    else cout<<"FALSE"<<endl;
    
    
}