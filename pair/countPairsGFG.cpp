#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	int a[10000];
int main(){
    optimize();
    int t;
    cin>>t;
	while(t--){
		int n,x,y;
		cin>>n>>x>>y;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
    vector<pair<int,int>> v;
	for(int i=0; i<n;i++){
		for(int j=i+1;j<n;j++){
			if( ((a[i] + a[j])%x ==0) &&  ((a[i] - a[j])%y==0)){
				v.push_back({a[i],a[j]});
			}
		}
	}
	cout<<v.size()<<"\n";

	}
    
    
}