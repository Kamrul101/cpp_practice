#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// long long a[mx];
bool isPrime(int num){
    int count=0;
    for(int i=1; i<=num;i++){
		if(num%i==0){
			count++;
		}
	}
	if(count == 2){
		return true;
	}
	else return false;
}
int main() {
    optimize();
    
    int n;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++){
        if(isPrime(i)){
            v.push_back(i);
        }
    }
    int almostP = 0;
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=0;j<v.size();j++){
            if(i%v[j]==0) cnt++;
            if(cnt>2){
                cnt =0;
                break;
            }
        }
        if(cnt==2) almostP++;
    }
    cout<<almostP<<endl;
    
    
}