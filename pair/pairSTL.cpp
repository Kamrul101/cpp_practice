#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    pair<int,int> p;
    pair<int,int> p3[] ={{6,5},{4,9},{1,6}};

    pair<int,vector <int>> p2;
    p2.first = 2;
    p2.second = {1,2,3,4};
    
    // cout<<p.first<<endl;
     
    sort(p3,p3+3);
    for(int i=0;i<3;i++){
        cout<<p3[i].first<<" "<<p3[i].second<<endl;
    }
    // cout<<p2.second.size();
}