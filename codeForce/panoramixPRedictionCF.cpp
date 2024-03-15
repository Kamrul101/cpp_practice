#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
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
    int m,n,i;
    cin>>n>>m;
    for(i=n+1;i<=m;i++){
     if(isPrime(i)){
        break;
     }
    }
    if(i==m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}