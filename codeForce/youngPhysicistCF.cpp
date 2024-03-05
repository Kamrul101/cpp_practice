#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 2e6+123;
long long a[mx];

int main() {
    optimize();
    int m;
    cin>>m;
    
    int a[m][3],sum1=0,sum2=0,sum3 = 0;
    for(int i = 0;i<m;i++){
        for(int j=0; j<3 ;j++){
            cin>>a[i][j];
        }  
    }
    for(int j = 0;j<3;j++){
          for(int i=0;i<m;i++){
            if(j==0){
                sum1+=a[i][j];
            }
            if(j==1){
                sum2+=a[i][j];
            }
            if(j==2){
                sum3+=a[i][j];
            }
          }
    }
    cout<<(sum1==0 && sum2==0 && sum3==0 ? "YES\n" : "NO\n");

}